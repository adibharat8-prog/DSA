class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int num1 = INT_MIN;
        int num2 = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>num1){
                num2 = num1;
                num1 = nums[i];
            }else if(nums[i]>num2){
                num2 = nums[i];
            }
        }
        return (num1-1)*(num2-1);

        
        
        
        
        
        // sort(nums.begin(),nums.end());
        // int maxi = INT_MIN;
        // int num1=0;
        // int num2=0;
        // return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
    }
};