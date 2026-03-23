class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n ==0 || n ==-1) return false;

        while(n%3 ==0){
            n = n/3;
        }
        return true;
    }
};