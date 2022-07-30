class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        vector<int> count(26,0);
        vector<int> count2(26,0);
        for(int i=0;i<words2.size();i++)
        {
            vector<int> temp(26,0);
            for(int j=0;j<words2[i].length();j++)
            {
                temp[words2[i][j]-'a']++;
                count[words2[i][j]-'a']=max(temp[words2[i][j]-'a'],count[words2[i][j]-'a']);
            }
        }
        //count {frequency of word2 set}
        for(int i=0;i<words1.size();i++)
        {
            for(int j=0;j<26;j++)
            {
                count2[j]=0;
            }
            for(int j=0;j<words1[i].length();j++)
            {
                count2[words1[i][j]-'a']++;
            }
            int flag=0;
            for(int k=0;k<26;k++)
            {
                if(count[k]>count2[k])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                res.push_back(words1[i]);
            }
                
        }
        return res;
    }
};