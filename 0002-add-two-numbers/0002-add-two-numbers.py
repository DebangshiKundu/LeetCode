# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry=0
        res=ListNode(0)
        head=res
        while l1 and l2:
            s=l1.val+l2.val
            s+=carry
            carry=0
            if s>9:
                carry=s//10
                s=s%10
            nn=ListNode(s)
            head.next=nn
            head=nn
            l1=l1.next
            l2=l2.next

        while l1:
            s=l1.val+carry
            carry=0
            if s>9:
                carry=s//10
                s=s%10
            nn=ListNode(s)
            head.next=nn
            head=nn
            l1=l1.next

        while l2:
            s=l2.val+carry
            carry=0
            if s>9:
                carry=s//10
                s=s%10
            nn=ListNode(s)
            head.next=nn
            head=nn
            l2=l2.next
        
        if carry!=0:
            nn=ListNode(carry)
            head.next=nn
            head=nn
        return res.next