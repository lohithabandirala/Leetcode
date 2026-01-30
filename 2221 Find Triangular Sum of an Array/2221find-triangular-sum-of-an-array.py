

class Solution(object):

    def triangularSum(self, nums):
            n=len(nums) 
            if n==1:

                return nums[0]

            newNums=[]

            for i in range(n-1):

                newNums.append((nums[i]+nums[i+1])%10)

            return self.triangularSum(newNums)

nums=[1,2,3,4,5]



s=Solution().triangularSum(nums)

print(s)
        