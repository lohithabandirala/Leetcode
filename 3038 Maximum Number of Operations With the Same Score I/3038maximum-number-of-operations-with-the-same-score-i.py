class Solution(object):
    def maxOperations(self, nums):

        c=1
        s=nums[0] + nums[1]

        for i in range(2, len(nums)-1, 2):
            if nums[i] + nums[i + 1] == s:
                c+=1
            else:

                break

        return c
  