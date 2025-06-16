class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        row=[set() for _ in range(9)]
        col=[set() for _ in range(9)]
        box=[set() for _ in range(9)]

        for i in range(9):
            for j in range(9):
                val=board[i][j]
                if val!='.':
                    row[i].add(val)
                    col[j].add(val)
                    box[(i//3)*3+(j//3)].add(val)
        
        def back(r,c):
            if r==9:
                return True
            if c==9:
                return back(r+1,0)
            if board[r][c]!='.':
                return back(r,c+1)
            idx=(r//3)*3+(c//3)
            for d in map(str,range(1,10)):
                if d not in box[idx] and d not in col[c] and d not in row[r]:
                    row[r].add(d)
                    col[c].add(d)
                    box[idx].add(d)
                    board[r][c]=d

                    if back(r,c+1):
                        return True
                    row[r].remove(d)
                    col[c].remove(d)
                    box[idx].remove(d)
                    board[r][c]="."
            return False

        back(0,0)
                    


        

        