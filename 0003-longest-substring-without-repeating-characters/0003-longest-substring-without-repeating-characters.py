class Solution(object):
    def lengthOfLongestSubstring(self, s):
        r,l=0,0
        maxi=0
        seen=set()
        for r in range(len(s)):
            while s[r] in seen:
                seen.remove(s[l])
                l+=1
            seen.add(s[r])
            maxi=max(maxi,r-l+1)
        return maxi

        """
        :type s: str
        :rtype: int
        """
        