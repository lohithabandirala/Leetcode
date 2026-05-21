class Solution(object):
    def removeKdigits(self, num, k):
        """
        :type num: str
        :type k: int
        :rtype: str
        """
        if k==len(num):
            return "0"
            
        items=[]
        
        
        for i in num:
            
            while k>0 and items and items[-1]>i:
                items.pop()
                
                k-=1
       
            items.append(i)
             
        while k > 0:
            items.pop()
            k -= 1
        k=''.join(items)
        l=k.lstrip('0')
        if l == "":
            return "0"
        return l