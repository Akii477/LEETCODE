//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        
        //BRUTE FORCE:
        
        // if(n == 1)
        // {
        //     return 1;
        // }
        // int leftSum = 0;
        // int rightSum = 0;
        
        // for(int i = 0; i<n; i++)
        // {
        //       leftSum =0;
        //       for(int j = i-1; j>=0 ; j--)
        //       {
        //           leftSum += arr[j];
        //       }
               
        //       rightSum = 0;
        //       for(int k = i+1; k<n; k++)
        //       {
        //           rightSum += arr[k];
        //       }
               
        //       if( leftSum == rightSum)
        //       {
        //           return i+1;
        //       }
    
        // }
        
        // return -1;
        
        
        
        
        //OPTIMAL
        
        if(n == 1)
        {
            return 1;
        }
        
        int rightSum = 0;
        int TotalSum = 0;
        
        // step 1: find total sum
        
        for(int i =0 ; i<n; i++)
        {
            TotalSum += arr[i];
        }
        
        // Step 2: total sum ko current element se minus karke check karenge ki wo rightSum ke equal hai ya nahi
        for(int i = 0; i<n ; i++)
        {
            TotalSum -= arr[i];
            
            if(TotalSum == rightSum)
            {
                return i+1;
            }
            
            rightSum += arr[i];
        }
        return -1;
    }

// TC = O(n);
};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends