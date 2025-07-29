class Solution:
    def eating_hour(self, piles, k):
        h = 0

        for i in piles:
            h += (i // k)

            if i % k != 0:
                h += 1
        
        return h

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        n = len(piles)
        low = 1
        high = max(piles)

        while low <= high:
            mid = (low + high) // 2

            est_h = self.eating_hour(piles, mid)

            if est_h <= h:
                high = mid - 1
            else:
                low = mid + 1
        
        return low