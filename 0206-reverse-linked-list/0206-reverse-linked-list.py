# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        node=None
        n=head
        while n :
            temp=n.next
            n.next=node
            node=n
            n=temp
        return node
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        