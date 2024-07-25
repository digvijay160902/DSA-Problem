//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // approach 1
        int xorresult=0;
        
        for(int i=0; i<n-1; i++)
        {
            xorresult = xorresult^arr[i];
        }
        
        for(int i=1; i<=n; i++)
        {
            xorresult=xorresult^i;
        }
        
        return xorresult;
        
        //approach 2
        // missing number = totalsum from1 to n  - sum of given array
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> arr[i];
        Solution obj;
        cout << obj.missingNumber(n, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends