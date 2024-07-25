//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        
        // approach 1
        // if(N==1)
        //     return 1;
        // int index = 1;
        // int num =0;
        // int val=0;
        // int count=0;
        
        // // took lot of time time, but did it
        
        // while(num<N)
        // {
        //     int val = pow(2,index);
        //     if(val < N)
        //     {
                
        //         num = val;
        //         index++;
        //     }
        //     else if(val==N)
        //     {
               
        //         count++;
        //         num = val;
        //     }
        //     else{
               
        //         count++;
        //         N = N-num;
        //         num =0;
        //         index=0;
               
        //     }
        // }
        // return count;
        
        // approach 2
        
        // find out LSB and check it is 1 or 0 and then just right 
        // shift untill it becomes 0
        
        int count=0;
        while(N)
        {
            if(N&1)
                count++;
                
            N = N>>1;
        }
        
        return count;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends