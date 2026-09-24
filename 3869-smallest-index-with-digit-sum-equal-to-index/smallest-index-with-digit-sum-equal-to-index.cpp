class Solution {
public:

    int getDigutSum(int i){
        int sum = 0;
        while(i>0){
            int d = i%10;
            sum += d;
            i/=10;
        }
        return sum;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int sum = getDigutSum(nums[i]);
            if(sum==i) return i;
        }
        return -1;
    }
};      