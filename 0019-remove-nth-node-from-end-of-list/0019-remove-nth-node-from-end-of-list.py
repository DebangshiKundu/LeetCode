# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        t=ListNode(0)
        t.next=head
        s=f=t
        for i in range(n+1):
            f=f.next
        while f:
            f=f.next
            s=s.next
        s.next=s.next.next
        return t.next
        
            


        