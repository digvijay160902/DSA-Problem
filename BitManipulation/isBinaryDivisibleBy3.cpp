//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    // two condition need to take into account
	    // 1 :- if count of 1 at even and odd position is same
	    // 2 :- if count of either at even  or  odd position is multiple of 3  then that number also become divisible by 3
	    int i,odd=0,eve=0,n=s.size();
	        for(i=0;i<n;i++){
	        if(s[i]=='1'){
	            if(i%2)odd++;
	            else eve++;
	        }
	    }
	    return (odd-eve)%3==0;
	    
	    
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends