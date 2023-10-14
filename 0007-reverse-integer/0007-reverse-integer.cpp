class Solution {
public:
    int reverse(int x) {
       int rev=0,num=x;
        int i;
        while(num>0 and x>0 or num<0 and x<0)
        {
            if( rev>INT_MAX/10 or rev==INT_MAX/10 and x%10>=7) return 0;
            if(rev<INT_MIN/10 or rev==INT_MIN/10 and x%10<=-8) return 0;
            rev=rev*10+x%10;
            x/=10;
        }
        if(x<0)
            rev=rev-2*rev;
        return rev;
    }
};