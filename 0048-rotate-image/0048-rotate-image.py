class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """

        for i in range(len(matrix)):
            for j in range(i,len(matrix)):
                matrix[i][j],matrix[j][i]=matrix[j][i],matrix[i][j]
        j=len(matrix)-1
        for i in range(len(matrix)):
            k=len(matrix)-1
            for j in range(len(matrix)/2):
                matrix[i][j],matrix[i][k]=matrix[i][k],matrix[i][j]
                k-=1
            

        
        