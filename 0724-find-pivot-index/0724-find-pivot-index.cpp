class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int rightSum = 0;
        int totalSum = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            totalSum += nums[i];
        }
        
        for(int i = 0; i<nums.size(); i++)
        {
            totalSum -= nums[i];
            
            if(totalSum == rightSum)
            {
                return i;
            }
            
            rightSum += nums[i];
        }
        
        return -1;
    }
};