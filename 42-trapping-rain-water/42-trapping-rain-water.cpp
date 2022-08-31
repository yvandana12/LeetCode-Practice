class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> l(height.size(),0);
        vector<int> r(height.size(),0);
        l[0]=height[0];
        cout<<l[0]<<" ";
        for(int i=1;i<height.size();i++)
        {
            l[i]=max(l[i-1],height[i]);
            cout<<l[i]<<" ";
        }
        r[height.size()-1]=height[height.size()-1];
        //cout<<"R : ";
        for(int i=height.size()-2;i>=0;i--)
        {
            r[i]=max(r[i+1],height[i]);
            cout<<r[i]<<" ";
        }
        int res=0;
        for(int i=0;i<height.size();i++)
        {
            res+=min(l[i],r[i])-height[i];
            //cout<<res<<"\n";
        }
        return res;
    }
};