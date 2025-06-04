class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        count = 0
        hash = {}
        sum = 0

        for i in range(len(nums)):
            sum += nums[i]

            if sum == k:
                count+=1
            
            if hash.get(sum-k) != None:
                count += hash.get(sum-k)
            
            hash[sum] = hash.get(sum, 0) + 1
        
        return count