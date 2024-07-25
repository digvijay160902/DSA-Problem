//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xorres = 0;
        for(auto i:nums)
        {
            xorres = i^xorres;
        }
        
        int num = xorres & -xorres; // this identifies rightmost set bet of xorres;
        int part1 = 0; // whose and with num element will be 0;
        int part2 = 0; // whose and with num will be 1;
        
        for(auto i:nums)
        {
            if(num&i)
                part1=part1^i;
            else
                part2=part2^i;
        }
        
        nums.clear();
        // answer is required in ascending order
        if(part1 >part2){
            nums.push_back(part2);
            nums.push_back(part1);
        }
        else
        {
            nums.push_back(part1);
            nums.push_back(part2);
        }
        
        return nums;
            
            
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends