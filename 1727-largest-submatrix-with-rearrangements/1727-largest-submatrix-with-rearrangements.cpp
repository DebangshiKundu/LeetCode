class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int ans = 0;
        
        for (int row = 0; row <  matrix.size(); row++) {
            for (int col = 0; col <  matrix[0].size(); col++) {
                if (matrix[row][col] != 0 and row>0) 
                    matrix[row][col] += matrix[row - 1][col];
            }
            vector<int> cur = matrix[row];
            sort(cur.begin(), cur.end(), greater());
            for (int i = 0; i <  matrix[0].size(); i++) {
                ans = max(ans, cur[i] * (i + 1));
            }
        }
        return ans;
    }
};