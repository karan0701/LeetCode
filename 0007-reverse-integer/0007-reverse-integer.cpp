class Solution {
public:
    int reverse(int x) {
        int answer=0;
        while (x!=0){
            int digit = x%10;

            if( (answer > INT_MAX) || (answer < INT_MIN) ){
                return 0;
            }
            answer = answer *10 + digit;
            x = x/10;
        }
        return answer;
    }
};

