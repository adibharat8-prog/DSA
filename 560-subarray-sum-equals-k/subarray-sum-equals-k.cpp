class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int currSum = 0;
        int cnt = 0;
        mp.insert({0,1});
        for(int i=0; i<nums.size(); i++){
            currSum += nums[i];
            int var = currSum - k;
            if(mp.find(var) != mp.end()){
                cnt += mp[var];
            }
            mp[currSum]++;
        }
        return cnt;
    }
};