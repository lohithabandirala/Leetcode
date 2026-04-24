class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n=len(nums)
        suffix=[1]*n
        prefix=[1]*n
        for i in range(1,n):
            prefix[i]=prefix[i-1]*nums[i-1]
         
        for i in range(n-2,-1,-1):
            suffix[i]=suffix[i+1]*nums[i+1]
        ans=[]
        for i in range(n ):
             ans.append(suffix[i]*prefix[i])
            
        return ans
           
            
            
            
            