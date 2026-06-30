class Solution {
public:

int FirstOcc(vector<int>& arr, int key){
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int LastOcc(vector<int>& arr, int key){
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}


    vector<int> searchRange(vector<int>& nums, int target) {
            return {FirstOcc(nums, target) , LastOcc(nums, target)};

        
    }
};