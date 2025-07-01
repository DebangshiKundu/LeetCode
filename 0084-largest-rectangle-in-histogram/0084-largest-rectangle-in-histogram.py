class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        maxv=0
        stack=[]
        for i,h in enumerate(heights):
            st=i
            while stack and h<stack[-1][1]:
                idx,he=stack.pop()
                st=idx
                maxv=max(maxv,he*(i-idx))
            stack.append([st,h])
        for i,h in stack:
            maxv=max(maxv,h*(len(heights)-i))
        return maxv



        