#User function Template for python3

class Solution:
	def findPeakElement(self, a):
		# Code here
		low , high = 0 , len(a)-1
		mid = 0
		
		while low <= high :
		    mid = (low+high) >> 1;
		    
		    if mid == 0 or mid == len(a)-1 or (a[mid+1] < a[mid] and a[mid-1] < a[mid]) :
		        break;
		        
		    elif a[mid+1] > a[mid]:
		        low = mid+1
		    else:
		        high = mid-1
		        
		return a[mid]



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		a = list(map(int,input().split()))
		ob = Solution();
		ans = ob.findPeakElement(a)
		print(ans)




# } Driver Code Ends