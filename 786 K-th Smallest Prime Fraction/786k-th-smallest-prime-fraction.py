class Solution:
    def kthSmallestPrimeFraction(self, arr: List[int], k: int) -> List[int]:
        
        d = {}
        minHeap = []
        n = len(arr)
        for i in range(n):
            for j in range(i+1, n):
                frac = arr[i]/arr[j]
                d[frac] = [arr[i], arr[j]]
                heapq.heappush(minHeap, frac)
        while k>1:
            heapq.heappop(minHeap)
            k-=1
        return d[heapq.heappop(minHeap)]