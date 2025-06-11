"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if not head: return None 
        nn={}
        h=head
        while h: 
            nn[h]=Node(h.val)
            h=h.next
        h=head
        while h:
            nn[h].next=nn.get(h.next)
            nn[h].random=nn.get(h.random)
            h=h.next
        return nn[head]

        