//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int dup=n;
		    int ans=0;
		    while(n!=0)
		    {
		        int rem=n%10;
		            ans=ans*10+rem;
		            n/=10;
		    }
		    
		    if(dup==ans)
		    {
		        return "Yes";
		    }
		    else
		    {
		        return "No";
		    }
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
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends