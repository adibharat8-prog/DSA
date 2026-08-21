class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        bool notFound = false;
        int val = 0;
        for (int i = 0; i <= nums.size(); i++) {
            if (mp.find(i) != mp.end()) {
                continue;
            } else {
                notFound = true;
                val = i;
            }
        }
        return val;
    }
};

// Using XOR
// int res = 0;
// for (int i = 0; i < nums.size(); i++) {
//     res = res ^ nums[i];
//     res = res ^ (i + 1);
// }
// return res;

// Using formula
//  int n = nums.size();
//  int actualSum = (n*(n+1))/2 ;
//  int sum = 0;
//  for (int i = 0; i < nums.size(); i++) {
//      sum += nums[i];
//  }
//  return (actualSum-sum);

//
