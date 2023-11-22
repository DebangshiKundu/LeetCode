class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<deque<int>> dia;
        int maxSum=0,size=0,n=nums.size(),sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<nums[i].size();j++){
                sum=i+j;
                if (sum >= dia.size()) {
                    dia.resize(sum + 1);
                    }
                dia[sum].push_front(nums[i][j]);
                maxSum=max(maxSum,sum);
            }
        }
        vector <int> res;
        for(int i=0;i<=maxSum;i++)
            for(int j=0;j<dia[i].size();j++)
                res.push_back(dia[i][j]);
        return res;
    }
};