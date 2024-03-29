//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>posVal;
	    vector<int>negVal;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i] < 0)
	       {
	           negVal.push_back(arr[i]);
	       }
	       else
	       {
	           posVal.push_back(arr[i]);
	       }
	    }
	    
	    int i=0, j=0, k=0;
	    while(i<posVal.size() && j<negVal.size())
	    {
	        arr[k++] = posVal[i++];
	        arr[k++] = negVal[j++];
	    }
	    
	    
	    while(i< posVal.size())
	    {
	        arr[k++] = posVal[i++];
	    }
	    
	    while(j<negVal.size())
	    {
	        arr[k++] = negVal[j++];
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends