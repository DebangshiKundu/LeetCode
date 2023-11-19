class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int i=0,c=0,op=0;
        vector<int> freq(50001,0);
        for(i=0;i<nums.size();i++)
            freq[nums[i]]++;
        for(i=50000;i>=0;i--)
            if(freq[i]>0)
            {
                c+=op;
                op+=freq[i];
            }
        return c;
    }
};