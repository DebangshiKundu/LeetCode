from typing import List

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()

        out = []
        i, j = intervals[0]  

        for k in range(1, len(intervals)):
            if intervals[k][0] > j:  
                out.append([i, j]) 
                i, j = intervals[k]  
            else:
                j = max(j, intervals[k][1])  

        out.append([i, j])  
        return out
