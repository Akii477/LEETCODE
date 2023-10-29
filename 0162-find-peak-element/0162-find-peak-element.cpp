class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxElement = INT_MIN;
        for(int i =0 ; i< nums.size(); i++)
        {
            
                maxElement = max(maxElement, nums[i]);
               
            
        }
         int maxIndex = -1;
        for (int i =0; i<nums.size(); i++)
        {
            if(nums[i] == maxElement)
            {
                maxIndex = i;
            }
        }
        return maxIndex;
     
    }
};