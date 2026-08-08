class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxEnd = nums[0];
        int minEnd = nums[0];

        int bestMax = nums[0];
        int bestMin = nums[0];

        int totalSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int v1 = nums[i];
            int v2 = maxEnd + nums[i];
            int v3 = minEnd + nums[i];

            maxEnd = max(v1, max(v2, v3));
            bestMax = max(maxEnd, bestMax);

            minEnd = min(v1, min(v2, v3));
            bestMin = min(minEnd, bestMin);

            totalSum = totalSum + nums[i];
        }
        int bestMax2 = totalSum - bestMin;

        if (bestMax < 0) { // All negative elemets in array
            return bestMax;
        }

        if (bestMax > bestMax2) {
            return bestMax;
        } else {
            return bestMax2;
        }
    }
};