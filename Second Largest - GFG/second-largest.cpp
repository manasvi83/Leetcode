//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int max,max2,flag=0;
	    max=INT_MIN;
	    
	   for (int i=0;i<n;i++)
	    {
	        if(arr[i]>max) max=arr[i]; 
	    }
	    max2=INT_MIN;
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j]!=max)
            {
                if(arr[j]>max2) max2=arr[j];
                flag=1;
            } 
    }
	    if(flag==0) max2=-1;
	   
	    return max2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends