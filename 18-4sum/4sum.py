class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        res = []
        nums.sort()
        n = len(nums)

        for h in range(n):

            if h > 0 and nums[h] == nums[h-1]:
                continue
            
            for i in range(h+1, n):

                if i > h+1 and nums[i] == nums[i-1]:
                    continue
                
                j = i+1
                k = n-1

                while j < k:
                    sum = nums[h] + nums[i] + nums[j] + nums[k]

                    if sum == target:
                        res.append([nums[h], nums[i], nums[j], nums[k]])
                        j += 1
                        k -= 1

                        while j < k and nums[j] == nums[j-1]:
                            j+= 1

                        while k > j and nums[k] == nums[k+1]:
                            k-= 1

                    elif sum > target:
                        k-= 1
                    else:
                        j+= 1
            
        return res