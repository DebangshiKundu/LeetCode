class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int m=mat.size(),n=mat[0].size(),i=0,j=0,c=0,flag=0;
        while(c<4)
        {
            for(i=0;i<m;i++)
            {
                for(j=i;j<n;j++)
                    swap(mat[i][j],mat[j][i]);
            }
            for(i=0;i<n;i++)
                reverse(mat[i].begin(),mat[i].end());
            if(mat==target)
                return true;
            c++;
        }
        return false;
    }
};