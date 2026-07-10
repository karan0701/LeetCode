class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int num: nums)
        totalSum += num;
        int LeftSum = 0;
        for(int i=0; i< nums.size(); i++){
            int RightSum = totalSum - LeftSum - nums[i];
            if(LeftSum == RightSum)
                return i;

            LeftSum += nums[i];

        }
            return -1;
        
    }
        
    
};