class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size() - 1;
        while(i<=j){
            int mid = i+(j-i)/2;        //Overflow of int
            if (target == nums[mid]){
                return  mid;
            }else{
                if (nums[i] <= nums[mid]){            // Left half is sorted

                    if (target >= nums[i] && target < nums[mid]){
                        j = mid-1;
                    }else{
                        i = mid+1;
                    }
                }else{                               // Right half is sorted

                    if (target > nums[mid] && target <= nums[j]){   
                        i = mid+1;                       
                    }else{
                        j = mid-1;
                    }
                }
            }
        }
        return -1;
    }
};