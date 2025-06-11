class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,m=0;
        for (int n:nums){
            if (n==1) count++;
            else count=0;
            m=max(m,count);
        }
        return m;
    }
};