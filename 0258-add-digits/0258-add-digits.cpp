class Solution {
public:
    int addDigits(int num) {
        if(num ==0 ) return 0;
        int result  = 1+ (num-1)% 9;   // because direct num%9 karenge to kuch testcases nahi chalenge ... and abhi wala saare cases pr valid hai
        return result;
        
    }
};