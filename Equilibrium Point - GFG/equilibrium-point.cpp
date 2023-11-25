//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
        //INITIALIZE
        int rightSum = 0;
        int leftSum = 0;
        
        
        //BASE CASES 
        
        if( n == 1)
        {
            return 1;
        }
        
        if( n == 2)
        {
            return -1;
        }
        //FINDING A TOTAL SUM 
        
        for(int i =1; i<n; i++)
        {
            rightSum += a[i];
        }
        
        for(int j=0; j<n-1; j++)
        {
            if(leftSum == rightSum)
            {
                return j+1;
            }
            
            leftSum += a[j];
            rightSum -= a[j+1]; // because the next element will add in leftSum 
            
            
        }
        return -1;
    }

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