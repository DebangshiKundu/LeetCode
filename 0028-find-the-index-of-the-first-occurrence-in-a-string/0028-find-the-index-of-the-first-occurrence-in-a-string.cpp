class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        for(int i=0;i<haystack.size();i++)
        {
            int c=i;
            while(haystack[i++]==needle[j++])
                if(j==needle.size())
                    return c;
            i=c;
            j=0;
        }
        return -1;
    }
};