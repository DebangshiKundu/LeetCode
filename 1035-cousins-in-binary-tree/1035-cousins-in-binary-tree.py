# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCousins(self, root: Optional[TreeNode], x: int, y: int) -> bool:
        def find(node,parent,x,h):
            if not node: 
                return None
            if node.val==x:
                return (parent,h+1)
                
            return find(node.left,node,x,h+1) or find(node.right,node,x,h+1)
        x_p,x_l=find(root,None,x,0)
        y_p,y_l=find(root,None,y,0)
        return x_p!=y_p and x_l==y_l
        