class Solution {
public:
    bool rotateString(string s, string goal) {
        goal+=goal;
        int i=0,j=0;
        for(j=0;j<s.length();j++)
        {
            i=0;
            int c=j;
            while( j< s.length() and s[i]!=goal[j])
                j++;
            while(s[i]==goal[j]){
                i++,j++;
            }
            if(i==s.length() and s.length()==goal.length()/2)
                return true;
            else
                j=c;
        }
        return false;
    }
};