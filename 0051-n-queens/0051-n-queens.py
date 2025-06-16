class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        res=[]
        cols=set()
        pos=set()
        neg=set()
        b=[["."]* n for i in range(n)]
        def back(r):
            if r==n:
                path=[''.join(row) for row in b]
                res.append(path)
                return
            for c in range(n):
                if c in cols or (r+c) in neg or (r-c) in pos: continue
                pos.add(r-c)
                neg.add(r+c)
                cols.add(c)
                b[r][c]="Q"

                back(r+1)

                cols.remove(c)
                pos.remove(r-c)
                neg.remove(r+c)
                b[r][c]="."

        back(0)
        return res
        