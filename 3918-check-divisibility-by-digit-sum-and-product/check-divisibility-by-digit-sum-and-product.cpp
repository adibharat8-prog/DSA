class Solution {
public:
    int getResult(int num) {
        int sum = 0;
        int prod = 1;
        while (num > 0) {
            int d = num % 10;
            num = num / 10;
            sum += d;
            prod *= d;
        }
        return (sum + prod);
    }
    bool checkDivisibility(int n) {
        int num = n;
        int ans = getResult(num);
        bool found = (n % ans == 0) ? true : false;
        return found;
    }
};