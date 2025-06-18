class Solution:
    def swap(self, nums1, nums2, left, right):
        if nums1[left] > nums2[right]:
            nums1[left], nums2[right] = nums2[right], nums1[left]

    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        l = m + n
        gap = (l // 2) + (l % 2)

        while gap > 0:
            left = 0
            right = left + gap

            while right < l:
                if left < m and right >= m:
                    self.swap(nums1, nums2, left, right-m)
                elif left >= m:
                    self.swap(nums2, nums2, left-m , right-m)
                else:
                    self.swap(nums1, nums1, left, right)
                print(left, right)
                
                left += 1
                right += 1
            
            if gap <= 1:
                break
            
            gap = (gap // 2) + (gap % 2)
        
        for i in range(n):
            nums1[m + i] = nums2[i]