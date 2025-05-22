class Solution(object):
    def searchMatrix(self, matrix, target):
        j=-1
        for i in range(len(matrix)):
            if matrix[i][0]<=target<=matrix[i][-1]:
                j=i
                break
        for k in range(len(matrix[0])):
            print(matrix[j][k])
            if target==matrix[j][k]: return True
        return False
  