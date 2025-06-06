# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        prev = None
        curr = head
        while curr:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp
        rhead = prev

        dummy = ListNode(0, rhead)
        curr = dummy
        for _ in range(n - 1):
            if curr.next:
                curr = curr.next
        if curr.next:
            curr.next = curr.next.next

        prev = None
        curr = dummy.next
        while curr:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp

        return prev



        