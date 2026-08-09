class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        //same approach hai jaise lower bound ko find krte hai vaise hii

        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
               return mid;
            }
            else if(nums[mid]>target){
                high = mid-1;   // looking for more small index on left
            }
            else{
                low = mid +1;  // looking for right
            }
        }
        return low ;
        
    }
};