class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int> mp;
        int l = 0;
        for (int h = 0; h < nums.size(); h++) {
            if (h > 0 && nums[h - 1] != nums[h]) {
                mp[nums[l]]++;
                l = h;
            }
        }
        
        mp[nums[l]]++; // For last element
        int cnt = 0;

        //Check each box's frequency
        for (auto x : mp) {
        if (x.second == 1) {
            cnt++;
        }
    }
        return cnt;
    }
};