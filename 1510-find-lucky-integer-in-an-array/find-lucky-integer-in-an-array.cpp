class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        bool found = false;
        int val = -1;
        for (auto x : mp) {
            if (x.first == x.second) {
                val = max(val, x.first);
                found = true;
            }
        }
        return found ? val : -1;
    }
};