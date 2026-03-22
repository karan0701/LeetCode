class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long i=1; i*i<= num; i++){   // ( we use long instead of long because at the square of 46341 the valsue of int. is overflowed)
            if(i*i ==num)
            return true;
        }
        return false;
    }
};