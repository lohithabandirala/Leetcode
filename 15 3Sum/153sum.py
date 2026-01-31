class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        
        nums.sort()
        n=len(nums)
        c=0
        s1=[]
        for i in range(n-2):
            j=i+1
            k=n-1
            while(j<k):
                s=(nums[i]+nums[j]+nums[k])
                if s==0:
                    s1.append([nums[i],nums[j],nums[k]])
                    
                    c+=1
                    j+=1
                    k-=1
                elif s<0 :
                    j+=1
                else:
                    k-=1
        a1=[]
        for x in s1:
            if x not in a1:
                a1.append(x)
        return a1


a=[-1,0,1,2,-1,-4]
r=Solution()
x1=r.threeSum(a)
print(x1)
        