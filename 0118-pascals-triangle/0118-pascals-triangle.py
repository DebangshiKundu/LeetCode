class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        out=[[1]]
        for i in range(1,numRows):
            inn=[1]
            for j in range(i-1):
                inn.append(out[i-1][j]+out[i-1][j+1])
            inn.append(1)
            out.append(inn)
        return out



        