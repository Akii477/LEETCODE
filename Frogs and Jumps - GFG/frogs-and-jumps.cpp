//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        
        
        // intialize a vector to count the not visted
            vector<int>arr(leaves+1, 0);
            
             arr[0] = 1;
            for(int i =0 ; i<N; i++)
            {
                int x = frogs[i];
                if( x <= leaves && arr[x] == 0 ) // arr[x] == 0 measns not visited.
                {
                    // run loop for visit with there straingth.
                    for(int j = x; j <= leaves; j+=x) // j+=x beacuse of its straingth.
                    {
                        arr[j] = 1;
                    }
                }
            }
            
            int c = 0;
            for(int k = 0; k<=leaves; k++)
            {
                if(arr[k] == 0)
                {
                    c++;
                }
            }
            return c;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends