class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int low = 0;
        int high = k - 1;
        while (high < nums.size()) {
            unordered_set<int> st;
            for (int i = low; i <= high; i++) {
                st.insert(nums[i]);
            }
            for (auto x : st) {
                mp[x]++;
            }
            low++;
            high++;
        }
        int val = INT_MIN;
        bool found = false;
        for (auto x : mp) {
            if (x.second == 1) {
                val = max(val, x.first);
                found = true;
            }
        }
        return found ? val : -1;
    }
};