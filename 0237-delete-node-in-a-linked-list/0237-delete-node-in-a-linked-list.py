# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        head=node
        prev=None
        while head.next:
            temp=head.next.val
            head.next.val=head.val
            head.val=temp
            prev=head
            head=head.next
        prev.next=None

        