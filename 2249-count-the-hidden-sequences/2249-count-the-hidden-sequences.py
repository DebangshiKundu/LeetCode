class Solution:
    def numberOfArrays(self, diff: List[int], lower: int, upper: int) -> int:
        # hid=[]
        # if diff[0]>0:
        #     for i in range(lower,upper-diff[0]+1):
        #         hid.append([i,i+diff[0]])
        # else: 
        #     for i in range(lower-diff[0],upper+1):
        #         hid.append([i,i+diff[0]])
        
        # for i in range(1,len(diff)):
        #     for j in range(len(hid)):
        #         val=hid[j][-1]+diff[i]
        #         if val>=lower and val <= upper:
        #             hid[j].append(val)
        #         print(f"{hid[j]}-->{val}-->{diff[i]}")
        #     for k in reversed(range(len(hid))):
        #         if len(hid[k])!=i+2: hid.pop(k)
        # print(hid)
        # return len(hid)


        c=0
        mv=0
        mx=0
        for d in diff:
            c+=d
            mv=min(mv,c)
            mx=max(mx,c)
        return max(0,(upper-mx)-(lower-mv)+1)
                    
        