class Solution {
public:
    bool isGood(string s,string chars)
    {
        for(int i=0;i<s.length();i++)
        {
            int pos=chars.find(s[i]);
            if(pos!=-1)
                chars.erase(chars.begin()+pos);
            else
                return false;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        for(string i: words)
        {
            if(isGood(i,chars))
                res+=i.length();
        }
        return res;
    }
};