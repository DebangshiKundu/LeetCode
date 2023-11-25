class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<0)
            return false;
        int num=1;
        while(num<=n)
        {
            if(n==num)
                return true;
            if(num > 715827882)
                return false;
            num*=3;
        }
        return false;
    }
};