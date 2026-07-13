class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int low=0;
       int high=0;
       int res=INT_MIN;
       int zeroCount = 0;

       for(high=0; high<nums.size(); high++){
        if (nums[high] == 0){
            zeroCount++;
        }

        while(zeroCount > k){
            
            if(nums[low] == 0){
                zeroCount--;        //As that zero is leaving => low incremented
            }
            low++;
        }
        int len = high-low+1;
        res = max(res,len);
       } 
       return res;
    }
};