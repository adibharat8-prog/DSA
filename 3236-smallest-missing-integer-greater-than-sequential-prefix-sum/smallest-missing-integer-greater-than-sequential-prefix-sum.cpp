class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sum = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break; // if we find our prefix then end the liop
            }
        }
        while (mp.find(sum) != mp.end()) {
            sum++;
        }
        return sum;
    }
};