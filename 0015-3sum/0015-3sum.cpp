class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // create a list to store 
        vector<vector<int>>final;
        
        // sort the array
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // two pointer approach
        for(int i=0; i<n; i++)
        {
            if(i>0 && nums[i] == nums[i-1])continue;
            int j = i+1;
            int end = n-1;
            
            while( j<end )
            {
                int sum = nums[i] + nums[j] + nums[end];
                
                if(sum > 0)
                {
                    end--;
                }
                else if(sum < 0)
                {
                    j++;
                }
                else
                {
                    // store the actual value;
                    vector<int>temp = {nums[i], nums[j], nums[end]};
                    final.push_back(temp);
                    j++;
                    end--;
                    
                    while(j<end && nums[j] == nums[j-1] )j++;
                    while(j<end && nums[end] == nums[end+1]) end--;
                }
            }
        }
        return final;
        
    }
};