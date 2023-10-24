class Solution {
public:
    int totalMoney(int n) {
        int i=0,res=0,base=28;
        if(n<8)
        {
            for(int j=0;j<=n;j++)
                res+=j;
            return res;
        }
        else
        {
            int mul=n/7;
            res=(base*mul)+(mul*(mul-1)/2)*7;
            for(int j=mul+1;i<n%7;j++,i++)
                res+=j;
            return res;
        }        
    }
};