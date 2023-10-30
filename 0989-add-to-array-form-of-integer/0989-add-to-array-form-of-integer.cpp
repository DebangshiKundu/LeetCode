class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=k;
        for(int i=num.size()-1;i>=0;i--)
        {
            num[i]=num[i]+carry;
            carry=0;
            if(num[i]>=10){
                carry=num[i]/10;
                num[i]%=10;
            }
        }
        while(carry!=0){
            num.insert(num.begin(),carry%10);
            carry/=10;
        }
        return num;
    }
};