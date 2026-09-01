class Solution {
public:
    pair<bool, bool> hasChanged(int n) {
        bool changed = false;
        bool valid = true;
        while (n > 0) {
            int d = n % 10;
            if (d == 3 || d == 4 || d == 7) {
                valid = false;
                break;
            } else if (d == 2 || d == 5 || d == 6 || d == 9) {
                changed = true;
            }
            n = n / 10;
        }
        return {valid, changed};
    }

    int rotatedDigits(int n) {
        int cnt = 0;

        for (int i = 1; i <= n; i++) {
            auto [valid, changed] = hasChanged(i);

            if (valid == true && changed == true) {
                cnt++;
            }
        }
        return cnt;
    }
};