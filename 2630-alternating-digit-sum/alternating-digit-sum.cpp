class Solution {
public:
    int alternateDigitSum(int n) {
        bool sign = true;
        int ans = 0;
        string str = to_string(n);
        for(int i=0; i<str.length(); i++){
             if(sign){
                 int num1 = str[i] - '0';
                 ans += num1;
                 sign = false;
             }else{
                 int num2 = str[i] - '0';
                 ans -= num2;
                 sign = true;
             }
        }
        return ans;
    }
};