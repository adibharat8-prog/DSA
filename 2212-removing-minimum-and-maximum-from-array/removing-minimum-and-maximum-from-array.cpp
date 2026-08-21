class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxIdx = 0;
        int minIdx = 0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            // maxi = max(maxi,nums[i]);
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxIdx = i;
            }
            if (nums[i] < mini) {
                mini = nums[i];
                minIdx = i;
            }
        }

        int n = nums.size();
        int a = min(maxIdx, minIdx) + 1;
        int b = n - max(minIdx, maxIdx);
        int res1 = a + b;
        int res2 = n - min(maxIdx, minIdx);
        int res3 = max(maxIdx, minIdx) + 1;
        return (min(res1, min(res2, res3)));
    }
};