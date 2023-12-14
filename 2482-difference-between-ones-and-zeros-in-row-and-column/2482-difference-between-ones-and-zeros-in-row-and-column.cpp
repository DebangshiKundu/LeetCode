class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> onesrow(grid.size(),0);
        vector<int> onescol(grid[0].size(),0);
        vector<int> zerosrow(grid.size(),0);
        vector<int> zeroscol(grid[0].size(),0);
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                if(grid[i][j]==0)
                    zerosrow[i]++;
                else
                    onesrow[i]++;
        for(int j=0;j<grid[0].size();j++)
            for(int i=0;i<grid.size();i++)
                if(grid[i][j]==0)
                    zeroscol[j]++;
                else
                    onescol[j]++;
        vector<vector<int>> diff(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                diff[i][j]=onesrow[i]+onescol[j]-zerosrow[i]-zeroscol[j];
        return diff;
    }
};