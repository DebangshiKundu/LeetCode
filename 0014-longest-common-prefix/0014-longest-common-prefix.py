class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""
        
        common=""
        length=min(len(s) for s in strs)
        for i in range(length):
            if all(s[i]==strs[0][i] for s in strs):
                common+=strs[0][i]
            else:
                break
        return common
            