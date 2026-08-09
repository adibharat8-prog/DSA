class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }

        
        int leftPrefix = 0;
        for(int i=0; i<nums.size(); i++){
            
            int rightSuffix = (sum - (leftPrefix + nums[i]));
            if(leftPrefix == rightSuffix){
                return i;
            }
            leftPrefix += nums[i];
        }
        return -1;
    }
};