class Solution {
public:
    bool isSameAfterReversals(int num) {
        int digit = num%10;
        int answer = 0;
        if ( num == 0){
            return true;
        }
        while(num!=0){
            if(answer > INT_MAX/10 || answer < INT_MIN/10){
                return 0;
            }
            answer = answer *10 + digit;
            num = num/10;
        }
        return answer ;
        
    }
};