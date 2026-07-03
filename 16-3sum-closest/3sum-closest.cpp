class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum;
        int Min = INT_MAX;
        int closestSum;

        for(int i=0; i<n-1; i++){
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                int dif = abs(target - sum);
                if (dif < Min){
                    Min = dif;
                    closestSum = sum;
                }

                if(sum == target){
                    return sum;
                } else if(sum > target){
                    k--;
                }else{
                    j++;
                }
            }
        }
        return closestSum;
    }
};