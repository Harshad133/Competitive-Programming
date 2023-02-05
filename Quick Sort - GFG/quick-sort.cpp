//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int low, int high)
    {
        int temp;
    // if (n <= 1)
    //     return;
    temp = partition(a, low , high);

    // for left list sorting
    if (low < temp - 1)
        quickSort(a, low, temp - 1);

    // for right sub list
    if (high > temp + 1)
        quickSort(a, temp + 1, high);
    }
    
    public:
    int partition (int a[], int low, int high)
    {
        int i = low , j = high , m;
    int temp = a[low];

    while (i<=j)
    {
        while(a[i] <= temp)
            i++;
        while(a[j] > temp)
            j--;

        if(i<=j)
        {
            m = a[i];
            a[i] = a[j];
            a[j] = m;
        }
    }
    m = a[low];
    a[low] = a[j];
    a[j] = m;

    return j;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends