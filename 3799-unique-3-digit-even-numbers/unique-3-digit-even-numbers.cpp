class Solution {
public:
    bool checkEven(int num, unordered_map<int, int> mp) {
        while (num > 0) {
            int d = num % 10;
            if (mp.find(d) != mp.end()) {
                if (mp[d] > 0) {
                    mp[d]--;
                } else {
                    return false;
                }
            } else {
                return false;
            }
            num = num / 10;
        }
        return true;
    }


int totalNumbers(vector<int>& digits) {
    bool even = false;
    unordered_map<int, int> mp;
    for (int x : digits) {
        if (x % 2 == 0) {
            even = true;
        }
        mp[x]++;
    }

    int cnt = 0;
    for (int i = 100; i <= 999; i++) {
        if (i % 2 == 0) {
            if (checkEven(i, mp)) {
                cout << i << endl;
                cnt++;
            }
        }
    }
    return (!even) ? 0 : cnt;
}
}
;