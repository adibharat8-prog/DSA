class Solution {
public:
    int Product(int n) {
        int p = 1;
        while (n > 0) {
            int d = n % 10;
            n = n / 10;
            p = p * d;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        int num = n;
        while (true) {
            int prod = Product(num);
            if (prod % t == 0) {
                return num;
                break;
            } else {
                num++;
            }
        }
    }
};