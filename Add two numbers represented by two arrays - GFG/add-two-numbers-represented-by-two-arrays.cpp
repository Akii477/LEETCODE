//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
        int carry = 0;
        string ans;
        int i = n-1;
        int j = m-1;
        
        while(i>=0 && j>=0)
        {
            int x = a[i] + b[j] + carry; // carry if exist;
            int digit = x%10;
            
            ans.push_back(digit + '0');
            carry = x/10;
            i--;
            j--;
        }
        
        // if furst array is bigger that means the element is left ot add
         while(i>=0 )
        {
            int x = a[i] + 0 + carry ;// carry if exist; // there is no second array element;
            int digit = x%10;
            ans.push_back(digit + '0');
             carry = x/10;
            i--;
           
        }
        
        while(j>=0 )
        {
            int x =   0 + b[j] + carry; // carry if exist; // there is no first array element;
            int digit = x%10;
            ans.push_back(digit + '0');
            carry = x/10;
            j--;
           
        }
        
        // if any carry exist after all addition then insert at last
        if(carry)
        {
            ans.push_back(carry+ '0');
        }
        
        // suupose 090035 + 000227 = 090262  here 0 before 9 is not useful
        while(ans[ans.size()-1] == '0')
        {
            ans.pop_back();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
}
// } Driver Code Ends