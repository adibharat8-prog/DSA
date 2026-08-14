class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int, int> mp;
        int low = 0;
        int high = 0;
        int res = 0;
        for (int high = 0; high < s.length(); high++) {
            mp[s[high]]++;
            while (mp[s[high]] > 2) {
                mp[s[low]]--;
                low++;
            }
            int len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};