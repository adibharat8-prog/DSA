class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = 1;
        }

        int ans = k;
        while (true) {
            if (mp.find(ans) == mp.end()) {
                return ans;
                break;
            }
            ans += k;
        }
    }
};