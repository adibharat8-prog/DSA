class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> p(n); //Max prefix array
        vector<int> s(n);  //Min suffix array
        p[0] = nums[0];
        s[n-1] = nums[n-1];
        //for(int i=1; i<n; i++){
        //    p[i] = max(p[i-1],nums[i]); 
        //}
        for(int i=n-2; i>=0; i--){
            s[i] = min(nums[i],s[i+1]);
        }
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(maxi,nums[i]);
            if(maxi-s[i] <= k){
                return i;
                
            }
        }
        return -1; 
    }
};