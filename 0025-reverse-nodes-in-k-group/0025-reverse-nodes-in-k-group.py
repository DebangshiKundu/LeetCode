# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseKGroup(self, head, k):
        """
        :type head: Optional[ListNode]
        :type k: int
        :rtype: Optional[ListNode]
        """
        dummy=ListNode(0)
        dummy.next=head
        grp_prev=dummy
        
        def rev(start,grp_next):
            curr=start
            prev=grp_next
            for i in range(k):
                temp=curr.next
                curr.next=prev
                prev=curr
                curr=temp

            return prev
        while True:

            kth=grp_prev
            for i in range(k):
                kth=kth.next
                if not kth:
                    return dummy.next
            grp_next=kth.next
            start=rev(grp_prev.next,grp_next)
            temp=grp_prev.next
            grp_prev.next=start
            grp_prev=temp