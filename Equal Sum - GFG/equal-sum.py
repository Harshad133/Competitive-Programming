#User function Template for python3
class Solution:

	def equilibrium(self,arr, n): 
    	# code here
        lsum , rsum = 0,0
        
        for i in arr:
            rsum += i
            
        for i in arr:
            rsum = rsum - i;
            if rsum == lsum :
                return "YES"
            lsum = lsum + i;
            
        return "NO"

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

	
	tc=int(input())
	while tc > 0:
	    n=int(input())
	    a=list(map(int , input().strip().split()))
	    ob = Solution()
	    ans=ob.equilibrium(a, n)
	    print(ans)
	    tc=tc-1
# } Driver Code Ends