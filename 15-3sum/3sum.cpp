class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int sum = -1*nums[i];
            int j=i+1;
            int k=nums.size()-1;
            while (j<k){
                if (nums[j] + nums[k] == sum){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while (j<k && nums[j] == nums[j-1]){    //Duplicate check for j
                        j++;
                    }
                    while (j<k && nums[k] == nums[k+1]){   //Duplivcate check for k
                        k--;
                    }
                } else if (nums[j] + nums[k] > sum){
                    k--;
                } else{
                    j++;
                }
            }
        }
    return ans;
    }
};