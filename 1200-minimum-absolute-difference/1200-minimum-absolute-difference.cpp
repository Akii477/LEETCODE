class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        // step 1: sort the array to find first absolute diffenrece easily.
            sort(arr.begin(), arr.end());
        
            vector<vector<int>> ans;
            int minDiff = INT_MAX;
        // step2: find first minimum abosolute differnce by traversing
            for(int i =0; i<arr.size()-1; i++)
            {
                minDiff = min(arr[i+1] - arr[i], minDiff);
            }
        
        // step3: Check the pair of minDiff and print it or store it accoridng to question.
            for(int i =0; i<arr.size()-1; i++)
            {
                if( arr[i+1] - arr[i] == minDiff)
                {
                   ans.push_back({arr[i], arr[i+1]}) ;
                }
            }
        return ans;
        
    }
};