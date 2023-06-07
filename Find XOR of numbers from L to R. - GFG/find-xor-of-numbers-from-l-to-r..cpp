//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findXOR(int l, int r) {
        int ans=0;
        if(l%2!=0) { ans=ans^l; l++;}
        // cout<<l<<" "<<r<<" " <<ans<<endl;
        int res=(r-l+1);
        if(res%4==0) ans=ans;
        else if(res%4==1) ans=ans^r;
        else if (res%4==2) ans=ans^r^(r-1);
        else if (res%4==3) ans=ans^r^(r-1)^(r-2);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    }
}
// } Driver Code Ends