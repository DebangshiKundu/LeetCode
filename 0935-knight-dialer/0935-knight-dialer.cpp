class Solution {
public:
    int knightDialer(int n) {
        if(n==1)
            return 10;
        int a=4,b=2,c=2,d=1,mod=1e9+7,ans=0;
        for(int i=0;i<n-1;i++){
            int A=a,B=b,C=c,D=d;
            a=((2*B)%mod+(2*C)%mod)%mod;
            b=A;
            c=(A+(2*D)%mod)%mod;
            d=C;
        }
        ans=(a+b)%mod;
        ans=(ans+c)%mod;
        return (ans+d)%mod;
    }
};