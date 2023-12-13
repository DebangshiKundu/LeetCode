class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int res=0,sum=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    for(int k=0;k<mat.size();k++)
                        sum+=mat[k][j];
                    for(int l=0;l<mat[i].size();l++)
                        sum+=mat[i][l];
                    if(sum==2)
                        res++;
                    sum=0;
                }
            }
        }
        return res;
    }
};