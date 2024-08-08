//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    long long helper(long long x)
    {
        long long ans=0;
        vector<int>ansbit;
        while(x)
        {
            // converting decimal to binary but it will be reversed number
            if(x%2)
                ansbit.push_back(1);
            else
                ansbit.push_back(0);
                
            x = x/2;
        }
        
        // adding zero 
        for(int i=ansbit.size(); i<32; i++)
        {
            ansbit.push_back(0);
        }
        // now we have reversed number just convert into the decimal
        for(int j = 0; j<ansbit.size(); j++)
        {
            if(ansbit[j])
                ans+=pow(2,ansbit.size()-j-1);
        }
        
        return ans;
    }
    
    long long reversedBits(long long x) {
        
        return helper(x);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends