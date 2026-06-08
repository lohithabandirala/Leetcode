# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def doubleIt(self, head):
        
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        stack=[]
        c=0
        while head!=None:
            stack.append(head.val)
            head=head.next
        newnode=None
        while stack or c!=0:
            newnode=ListNode(0,newnode)
            if stack:
                c+=stack.pop()*2
            newnode.val=c%10
            c=c//10
        return newnode
            
            
        
            
        
            
            
        