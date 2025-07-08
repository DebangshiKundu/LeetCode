# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        def reverse(start: ListNode, k: int) -> Tuple[ListNode, ListNode]:
            prev = None
            curr = start
            for _ in range(k):
                nxt = curr.next
                curr.next = prev
                prev = curr
                curr = nxt
            return prev, start  

        dummy = ListNode(0)
        dummy.next = head
        group_prev = dummy

        while True:
            kth = group_prev
            for _ in range(k):
                kth = kth.next
                if not kth:
                    return dummy.next

            group_next = kth.next
            prev, tail = reverse(group_prev.next, k)
            tail.next = group_next
            temp = group_prev.next
            group_prev.next = prev
            group_prev = temp
              
