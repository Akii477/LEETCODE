class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    //     int n= nums.size();
    //     int start=0, end=n-1,mid=0;
    //     while(mid<=end){
    //         if(nums[mid]!=0){
    //             swap(nums[start],nums[mid]);                  
    //                 start++;
    //         }
    //         mid++;
    //     }
        
        
        //second-approach
        //first check karo zero kaun se index per hai and store karo variable me
        int n=nums.size();
       int k = 0;
  while (k < n) {
    if (nums[k] == 0) {

      break;
    } else {
      k = k + 1;
    }
  }

  //finding zeros and immediate non-zero elements and swapping them
  int i = k, j = k + 1;

  while (i < n && j < n) {
    if (nums[j] != 0) {
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
      i++;

    }

    j++;

  }
    }
};