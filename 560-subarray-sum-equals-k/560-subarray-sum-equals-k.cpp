class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //     <--x--->
        //     <-------x+k---->
        //              <--k--->
        // arr[.................]
        //intially sum is 0
        unordered_map<int,int> mp;
        mp[0]=1;
        int ans=0;
        int sum=0;
        int rem_sum;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            rem_sum=sum-k;
            if(mp.find(rem_sum)!=mp.end())
            {
                ans=ans+mp[rem_sum];
            }
            mp[sum]=mp[sum]+1;
        }
        return ans;
    }
};