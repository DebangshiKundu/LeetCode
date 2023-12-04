class Solution {
public:
    string largestGoodInteger(string num) {
        char m='\0';
        for(int i=0;i<num.length()-2;i++)
            if(num[i]==num[i+1] and num[i+1]==num[i+2])
                m=max(num[i],m);
        return m=='\0'? "":string(3,m);    
    }
};