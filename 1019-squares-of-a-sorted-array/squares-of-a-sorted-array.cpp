class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int k=j;
        vector<int> arr(nums.size());
        while(i<=j){
            if (abs(nums[i]) < abs(nums[j])){
                arr[k] = (nums[j] * nums[j]);
                j--;
            } else{
                arr[k] = (nums[i] * nums[i]);
                i++;
            }
            k--;
        }
    return arr;
    }
};