class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int start = 0;
        int end = size-1;
        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return -1;
    }
};