class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        out=[]
        intervals.sort()
        i,j=intervals[0][0],intervals[0][1]
        for k in range(1,len(intervals)):
            if intervals[k][0] > j and intervals[k][0]>i:
                out.append([i,j])
                i=intervals[k][0]
                j=intervals[k][1]
            else:
                j=max(j,intervals[k][1])
        out.append([i,j])
        return out


        