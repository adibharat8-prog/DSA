class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=(nums1.size() - nums2.size()) - 1;
        int j=nums2.size() - 1;
        int k=nums1.size() - 1;
        while (i>=0 && j>=0){
            if (nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        while(i>=0){               //If nums1 has only 1 element because here i is index
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        while(j>=0){              //If nums2 has only one element because here j is index
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};