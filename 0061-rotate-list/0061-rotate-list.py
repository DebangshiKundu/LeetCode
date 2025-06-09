# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next or k == 0: return head
        f=head
        c=0
        while f:
            f=f.next
            c+=1
        k=k%c
        if k==0: return head
        s,f=head,head
        for _ in range(k):
            f=f.next
        while f.next:
            s=s.next
            f=f.next
        j=s.next
        f.next=head
        s.next=None
        return j
        
        