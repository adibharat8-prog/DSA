class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long long reversedNum = 0;
        while (num > 0) {
            int d = num % 10;
            reversedNum = reversedNum * 10 + d;
            num = num / 10;
        }
        if (reversedNum == x) {
            return true;
        } else {
            return false;
        }
    }
};