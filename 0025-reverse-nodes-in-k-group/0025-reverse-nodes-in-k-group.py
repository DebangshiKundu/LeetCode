# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        # temp=head
        # n=head
        # while temp:
        #     for _ in range(k-1):
        #         temp=temp.next
        #     if temp:
        #         t=temp.next
                
        #         while n!=temp:
        #             nn=n.next
        #             nn.next=n
        #             n=n.next
        def has_k_nodes(node, k):
            count = 0
            while node and count < k:
                node = node.next
                count += 1
            return count == k

        # Helper to reverse k nodes
        def reverse_k_nodes(head, k):
            prev, curr = None, head
            while k:
                next_node = curr.next
                curr.next = prev
                prev = curr
                curr = next_node
                k -= 1
            return prev, head  # New head, new tail

        dummy = ListNode(0)
        dummy.next = head
        group_prev = dummy

        while has_k_nodes(group_prev.next, k):
            group_start = group_prev.next
            group_end = group_start
            for _ in range(k - 1):
                group_end = group_end.next

            next_group = group_end.next
            # Reverse the group
            new_head, new_tail = reverse_k_nodes(group_start, k)
            group_prev.next = new_head
            new_tail.next = next_group

            group_prev = new_tail

        return dummy.next

