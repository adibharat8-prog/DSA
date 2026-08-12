class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int low = 0;
        int high = 0;
        int res = INT_MIN;

        while (high < nums.size()) {
            mp[nums[high]]++;
            while (mp[nums[high]] > k) { // As we need less than equal to k
                mp[nums[low]]--;
                low++;
            }
            int len = high - low + 1;
            res = max(res, len);
            high++;
        }
        return res;
    }
};