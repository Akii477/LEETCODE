//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subArraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
         int left = 0, right = 0;
        long long int currentSum = arr[0];
        if(s==0)
        {
            return {-1};
        }
        if (currentSum == s)
        {
            return {1, 1};
        }
        while (right < n - 1)
        {
            if (currentSum + arr[right + 1] <= s)
            {
                currentSum += arr[right + 1];
                right++;
            }
            else
            {
                currentSum -= arr[left];
                left++;
            }
            if (currentSum == s)
            {
                return {left + 1, right + 1};
            }
        }
        return {-1};
        
        
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subArraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends