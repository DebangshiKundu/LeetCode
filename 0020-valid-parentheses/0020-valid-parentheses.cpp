class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')
                st.push(s[i]);
            if(s[i]==')' or s[i]==']' or s[i]=='}')
            {
                switch (s[i])
                {
                    case ')': if(st.empty() or st.top()!='(' )
                        return false;
                        else 
                            st.pop();
                        break;
                    case ']': if(st.empty() or st.top()!='[' )
                        return false;
                        else 
                            st.pop();
                        break;
                    case '}': if(st.empty() or st.top()!='{' )
                        return false;
                        else 
                            st.pop();
                        break;
                }
            }
        }
        if(!st.empty())
            return false;
        else
            return true;
    }
};