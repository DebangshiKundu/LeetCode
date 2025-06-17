class Solution:
    def isValid(self, s: str) -> bool:
        st=[]
        for i in s:
            if i in ['(','[','{']:
                st.append(i)
            else:
                val=st.pop()
                if i==')' and val!='(' or i==']' and val!='[' or i=='}' and val!='{':
                    return False
        if st: return False
        return True
        