class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> res;
        int i=0,j=0,sum1=0;
        int sum2=accumulate(nums.begin(),nums.end(),0,plus<int>());
        for(i=0;i<nums.size();i++)
        {
            int sum=0;
            sum2-=nums[i];
            sum=sum2-((nums.size()-1-i)*nums[i]);
            sum+=(nums[i]*i)-sum1;
            res.push_back(sum);
            sum1+=nums[i];
        }
        return res;
    }
};