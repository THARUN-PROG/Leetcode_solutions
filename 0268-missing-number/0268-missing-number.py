class Solution:
    def missingNumber(self, a: List[int]) -> int:
        h = []
        n = len(a)
        for i in range(n+1):
            h.append(0)
        for i in range(n):
            h[a[i]] = 1
        for i in range(n+1):
            if(h[i]==0):
                return i
        return 0