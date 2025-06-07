# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        a,b=headA,headB
        flag=0
        while a!=b and flag!=2:
            if a.next!=None:
                a=a.next 
            else:
                a=headB
                flag+=1
            b=b.next if b.next!=None else headA
            if flag==2: break
        return a if flag!=2 else None 



