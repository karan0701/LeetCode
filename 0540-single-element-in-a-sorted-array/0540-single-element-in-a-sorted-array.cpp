class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e= n-1;
        while(s<e){
            int mid = s +(e-s)/2;
            if((mid%2 ==0 && mid+1<n && nums[mid]== nums[mid+1]) ||
             mid%2 ==1 && mid-1 >=0 && nums[mid] ==nums[mid-1])   // mid+1 and -1><n .... corner cases hai... jisse ki out of index na aa jaye and
            s = mid+1;
            else
            e = mid;
        if(mid+1<n && mid-1 >=0 && nums[mid]!= nums[mid+1] && nums[mid] !=nums[mid-1] ) return nums[mid];
        }
        
    return nums[s];
    }

};