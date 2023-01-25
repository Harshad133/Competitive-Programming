class Solution(object):
    def findKthPositive(self, arr, k):
        #         Before 2, there is 2 - 1 = 1 missing integer.
#         Before 3, there is 3 - 2 = 1 missing integer.
#         Before 4, there is 4 - 3 = 1 missing integer.
#         Before 7, there are 7 - 4 = 3 missing integers.
#         Before 11, there are 11 - 5 = 6 missing integers.

        #The number of positive integers which are missing before the arr[idx] is equal to arr[idx] - idx - 1.
    
        
        left,right = 0, len(arr)-1
        
        while left <= right:
            pivot = left + (right-left)/2
            # If number of positive integers
            # which are missing before arr[pivot]
            # is less than k -->
            # continue to search on the right.
            if arr[pivot] - pivot -1 < k:#search right part
                left = pivot + 1
                
            else:
                right = pivot -1 #search left part
                # At the end of the loop, left = right + 1, and the kth missing number is in-between arr[right] and arr[left]. The number of integers missing before arr[right] is arr[right] - right - 1. Hence, the number to return is arr[right] + k - (arr[right] - right - 1) = k + left.
        return left + k

