class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int minScore = INT_MAX;
        bool found = false;
        for (int i = 0; i < nums.size(); i++) {
            int mini = INT_MAX;
            int maxi = INT_MIN;
            for(int j=0; j<=i; j++){
                maxi = max(maxi, nums[j]);
            }
            for (int l = i; l < nums.size(); l++) {
                mini = min(mini,nums[l]);
            }
            int val = maxi - mini;
            if (val <= k) {
                minScore = min(minScore, i);
                found = true;
            }
        }
        return (found) ? minScore : -1;
    }
};