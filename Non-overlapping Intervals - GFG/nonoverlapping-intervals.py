#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def minRemoval(self, N, intervals):
        if not intervals:
            return 0
        intervals.sort(key=lambda x: x[1])
        
        # print(intervals)
        
        count = 0
        end = intervals[0][1]
        for i in range(1, len(intervals)):
            if intervals[i][0] < end:
                count += 1
            else:
                end = intervals[i][1]
        return count

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        N = int(input())
        intervals = [list(map(int, input().split())) for i in range(N)]
        ob = Solution()
        res = ob.minRemoval(N, intervals)
        print(res)
# } Driver Code Ends