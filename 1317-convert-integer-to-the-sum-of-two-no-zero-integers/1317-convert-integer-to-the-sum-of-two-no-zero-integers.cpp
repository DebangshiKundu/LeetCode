class Solution {
public:
    bool noZero(int n)
    {
        while(n>0)
        {
            if(n%10==0)
            {
                return false;
            }
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++)
        {
            int j=n-i;
            if(noZero(i) && noZero(j))
            {
                return {i,j};
            }
        }
        return {};
    }
};

