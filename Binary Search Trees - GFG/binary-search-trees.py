#{ 
 # Driver Code Starts
#Initial Template for Python 3

#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def isBSTTraversal(self, nums):
        # Code here
        
        for i in range(len(nums)-1):
            if nums[i] >= nums[i+1]:
                return False;
                
        return True;

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        n = int(input())
        nums = list(map(int, input().split()))
        ob = Solution()
        res = ob.isBSTTraversal(nums)
        print(res)
# } Driver Code Ends