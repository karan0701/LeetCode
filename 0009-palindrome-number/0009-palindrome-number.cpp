class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int original = x;
        int answer = 0;
        while (x!=0){
            
            int digit = x % 10;
            x = x/10;

            answer = answer * 10 + digit;
        }

        if (answer == original){
            return true;
        }
        return false;
    }
};