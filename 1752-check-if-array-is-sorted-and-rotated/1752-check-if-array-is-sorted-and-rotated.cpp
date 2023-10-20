class Solution {
public:
    bool check(vector<int>& nums) {
        int  count = 0;
        int n = nums.size();
        for(int i = 1; i<nums.size(); i++)
        {
            //case1: The first element should small to the next
            if(nums[i-1]>nums[i])
            {
                count++;
            }
        }
        
        if(nums[n-1]>nums[0])
        {
            count++;
        }
        
        return count<=1;
    }
};