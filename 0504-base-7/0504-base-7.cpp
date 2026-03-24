class Solution {
public:
    string convertToBase7(int num) {
        
        if(num ==0) return "0";
        string result;   // string bna lenge result naam ki
        bool negative = num<0;    // negative np. ko store krane ke liye
        num = abs(num);   // abs = absolute which means ki negative value bhi likhenge to output positive aayega
        
        while(num !=0){
            result = result + to_string(num % 7);    // reminder ko string mein store kra liya
            num = num/7;
        }
            if(negative) result = result + "-";
        reverse(result.begin(), result.end());
        return result;

    }
};