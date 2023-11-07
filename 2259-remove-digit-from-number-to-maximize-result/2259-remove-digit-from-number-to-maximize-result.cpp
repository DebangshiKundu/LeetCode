class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans="",num;
        for(int i=0;i<number.length();i++)
        {
            if(number[i]==digit)
            {
                num=number.substr(0,i)+number.substr(i+1);
            }
            ans=max(ans,num);
        }
        return ans;
    }
};