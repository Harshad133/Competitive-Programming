class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0

        m = set()

        for i in nums:
            m.add(i)
        # print(m)
        # cnt = 0
        long_cnt = -1

        for i in m:
            if (i-1) not in m:
                print(i)
                cnt = 1
                x = i
                while (x+1) in m:
                    x = x + 1
                    cnt = cnt + 1
                if cnt > long_cnt:
                    long_cnt = cnt
                print("count", cnt, long_cnt)
        return long_cnt