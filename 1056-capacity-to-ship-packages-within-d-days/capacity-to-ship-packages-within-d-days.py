class Solution:
    def shiping_days(self, weights, limit):
        days = 1
        count = 0

        for i in weights:
            count += i

            if count > limit:
                days += 1
                count = i
        
        return days

    def shipWithinDays(self, weights: List[int], days: int) -> int:
        n = len(weights)
        low = max(weights)
        high = sum(weights)

        while low <= high:
            mid = (low + high) // 2

            ship_day = self.shiping_days(weights, mid)

            if ship_day <= days:
                high = mid - 1
            else:
                low = mid + 1
        
        return low
