//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n) {

        // approach 1 binary search
        
        // if( n==1 || n==2)
        //     return true;
        // if(n==0 || n%2!=0)
        //     return false;
            
        // long long mid = n/2;
        
        // while(mid != 2)
        // {
        //     if(mid%2==0)
        //         mid=mid/2;
        //     else
        //         return false;
        // }
        
        // return true;
        
        //approch 2 recursion
        
        // base case
        if(n==1 || n==2)
            return true;
        if(n==0)
            return false;
        
        if(n%2==0)
            return isPowerofTwo(n/2);
        else
            return false;
        
        
    }
};

//{ Driver Code Starts.

// Driver code
int main() {

    int t;
    cin >> t; // testcases

    for (int i = 0; i < t; i++) {
        long long n; // input a number n
        cin >> n;
        // if (n == 11) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        if (ob.isPowerofTwo(n)) // Now, if log2 produces an integer not decimal then we
                                // are sure raising 2 to this value
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}

// } Driver Code Ends