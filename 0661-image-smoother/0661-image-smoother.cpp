class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size(),n=img[0].size();
        vector<vector<int>> res (m,vector<int> (n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum=0,c=0;
                for(int a=i-1;a<=i+1;a++){
                    for(int b=j-1;b<=j+1;b++)
                    {
                        if(a>=0 and a<m and b>=0 and b<n)
                        {
                            sum+=img[a][b];
                            c++;
                        }
                    }
                }
                res[i][j]=sum/c;
            }
        }
        return res;
    }
};