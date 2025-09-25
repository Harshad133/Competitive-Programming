class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        m = len(nums1)
        n = len(nums2)

        ans = [-1, -1]
        count = 0
        el = -1
        index2 = (n + m) // 2
        index1 = index2 - 1

        i, j = 0, 0
        while i < m and j < n:
            if nums1[i] < nums2[j]:
                if count == index1:
                    ans[0] = nums1[i]
            
                if count == index2:
                    ans[1] = nums1[i]

                count+= 1
                i += 1
            else:
                if count == index1:
                    ans[0] = nums2[j]
            
                if count == index2:
                    ans[1] = nums2[j]

                count += 1
                j += 1
        
        while i < m:
            if count == index1:
                ans[0] = nums1[i]
            
            if count == index2:
                ans[1] = nums1[i]

            count+= 1
            i += 1
        
        while j < n:
            if count == index1:
                ans[0] = nums2[j]
            
            if count == index2:
                ans[1] = nums2[j]

            count += 1
            j += 1
        
        # print(n)÷\
        if (n + m) % 2 == 1:
            return float(ans[1])
        return float(ans[0] + ans[1]) / 2.0
        
        




