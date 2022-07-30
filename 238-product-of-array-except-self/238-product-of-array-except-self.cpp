class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     
        vector<int> res(nums.size());
        vector<int> temp(nums.size());
        int p=1;
        for(int i=0;i<nums.size();i++)
        {
            temp[i]=p;
            p=p*nums[i];
        }
        p=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            res[i]=p*temp[i];
            p=p*nums[i];
        }
        return res;
    }
};