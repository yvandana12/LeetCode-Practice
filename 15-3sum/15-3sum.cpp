class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0||nums[i]!=nums[i-1])
            {
                int s=i+1;
                int e=nums.size()-1;

                while(s<e)
                {
                    if(nums[s]+nums[e]==(-nums[i]))
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[s]);
                        temp.push_back(nums[e]);
                        res.push_back(temp);
                        while(s<e&&nums[s]==nums[s+1]) s++;
                        while(s<e&&nums[e]==nums[e-1]) e--;
                        s++;
                        e--;
                    }
                    else if(nums[s]+nums[e]>(-nums[i]))
                    {
                        e--;
                    }
                    else
                    {
                        s++;
                    }
            }
        }
        }
        return res;
    }
};