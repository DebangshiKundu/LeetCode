class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int m=matrix.size();
        // int n=matrix[0].size(),i=0,j=0,a=0,b=0;
        // vector<vector<int>> visit(m, vector<int>(n, 0)); 
        // for(i=0;i<m;i++)
        // {
        //     for(j=0;j<n;j++)
        //     visit[i][j]=matrix[i][j];
        // }
        // for(i=0;i<m;i++)
        // {
        //     for(j=0;j<n;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             for(a=0;a<m;a++)
        //                 visit[a][j]=0;
        //             for(b=0;b<n;b++)
        //                 visit[i][b]=0;
        //         }
        //     }
        // }
        // for(i=0;i<m;i++)
        // {
        //     for(j=0;j<n;j++)
        //     matrix[i][j]=visit[i][j];
        // }
        int m = matrix.size();
        int n = matrix[0].size();
        bool firstRowHasZero = false;
        bool firstColHasZero = false;

        // Check if the first row has a zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowHasZero = true;
                break;
            }
        }

        // Check if the first column has a zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColHasZero = true;
                break;
            }
        }

        // Mark zeros on first row and first column
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set rows to zero
        for (int i = 1; i < m; i++) {
            if (matrix[i][0] == 0) {
                for (int j = 1; j < n; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set columns to zero
        for (int j = 1; j < n; j++) {
            if (matrix[0][j] == 0) {
                for (int i = 1; i < m; i++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set first row and first column to zero if needed
        if (firstRowHasZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        if (firstColHasZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};