class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer = 0;
        for (int num : nums){  // it also act as normal way but it is a range based for loop which read as " For each integer `num` IN `nums` — do this this "
            answer = answer^num;
        }
        return answer;
        
    }
};