class Solution {
public:
    int reverse(int n)
    {
        int num=0;
        while(n>0)
        {
            num*=10;
            num+=n%10;
            n/=10;
        }
        return num;
    }
    int countNicePairs(vector<int>& nums) {
        int i=0;
        long k=0;
        const int mod=1000000007;
        for(i=0;i<nums.size();i++)
            nums[i]=nums[i]-reverse(nums[i]);
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++)
        {
            long count=0;
            while(i<nums.size()-1 and nums[i]==nums[i+1]){
                count++;
                i++;
            }
            k=(k%mod+(count*(count+1)/2))%mod;
        }
        return (int) k%mod;
    }
};

