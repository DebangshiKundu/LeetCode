class Solution {
public:
    bool halvesAreAlike(string s) {
        int c=0,v=0;
        for(int i=0,j=s.length()-1;i<j;i++,j--){
            char k=(char) tolower(s[i]);
            if(k=='a' or k=='e' or k=='i' or k=='o' or k=='u')
                c++;
            k=(char) tolower(s[j]);
            if(k=='a' or k=='e' or k=='i' or k=='o' or k=='u')
                v++;
        }
        if(c==v)
            return true;
        else return false;
    }
};