# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        s=head
        f=head
        while f and f.next:
            s=s.next
            f=f.next.next
            
        prev=None
        while s:
            nn=s.next
            s.next=prev
            prev=s
            s=nn
        s,f=head,prev
        while f:
            if s.val!=f.val: return False
            s=s.next
            f=f.next
        return True
        