# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head=ListNode(0)
        t=head
        while list1!=None and list2!=None:
            if list1.val<=list2.val:
                t.next=list1
                list1=list1.next
            else:
                t.next=list2
                list2=list2.next
            t=t.next
        while list1:
            t.next=list1
            list1=list1.next
            t=t.next
        while list2:
            t.next=list2
            list2=list2.next
            t=t.next
        return head.next



        
        