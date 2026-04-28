class Solution(object):
    def findMinArrowShots(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        res=len(points)
        
        points.sort()
        n=len(points)
        prev=points[0]
        for i in range(1,len(points)):
            curr=points[i]
            if curr[0]<=prev[1]:
                res-=1
                prev=[curr[0],min(curr[1],prev[1])]
            else:
                prev=curr
        return res
        