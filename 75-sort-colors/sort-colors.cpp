class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0) zeros++;
            else if(nums[i] == 1) ones++;
            else if(nums[i] == 2) twos++;
        }
        int j=0;
        while(zeros > 0){
            nums[j] = 0;
            j++;
            zeros--;
        }
        while(ones > 0){
            nums[j] = 1;
            j++;
            ones--;
        }
        while(twos > 0){
            nums[j] = 2;
            j++;
            twos--;
        }
        
    }
};