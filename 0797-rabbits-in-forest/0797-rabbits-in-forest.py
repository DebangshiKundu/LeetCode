class Solution:
    def numRabbits(self, answers: List[int]) -> int:
        count=0
        while answers:
            idx=[ i for i,val in enumerate(answers) if val==answers[0] ]
            # if len(idx)==1: 
            #     count+=2*answers[0]
            # elif len(idx)<answers[0]:
            #     count+=answers[0]+1
            # elif len(idx)
            size=answers[0]+1
            sel=idx[:size]
            count+=size
            for i in reversed(sel):
                answers.pop(i)
        return count
                    

        