class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        
        // pos eleement is on even index and negative element at index on odd in Output.
        int n = nums.size();
        vector<int>ans(n) ;
        int posIndex = 0 , negIndex = 1;
        for(int i = 0; i<n; i++)
        {
            if(nums[i] > 0)
            {
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
            else
            {
                ans[ negIndex] = nums[i];
                negIndex +=2;
            }
        }
        return ans;
    }
};