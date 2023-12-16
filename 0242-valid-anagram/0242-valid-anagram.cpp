class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        bool flag =true;
        int i=0,j=0;
        while(flag==true and i<s.size())
        {
            flag=false;
            for(int j=0;j<t.size();j++)
            {
                if(t[j]==s[i])
                {
                    flag=true;
                    t.erase(j,1);
                    break;
                }
            }
            i++;
        }
        return flag;
    }
};