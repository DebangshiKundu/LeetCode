class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size(),i=0,j=0,a=0,b=0;
        vector<vector<int>> visit(m, vector<int>(n, 0)); 
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            visit[i][j]=matrix[i][j];
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(a=0;a<m;a++)
                        visit[a][j]=0;
                    for(b=0;b<n;b++)
                        visit[i][b]=0;
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            matrix[i][j]=visit[i][j];
        }
    }
};