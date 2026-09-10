class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }

        int ans = 0;
        bool odd = true;
        
        for (auto x : mp) {
            
            if (odd) {
                if (x.second % 2 != 0) {
                    ans += x.second;
                    odd = false;
                    continue;
                }
            }
            
            if (x.second % 2 != 0) {
                ans += (x.second - 1);
            } else {
                ans += x.second;
            }
        }

        
        
        return ans;
    }
};