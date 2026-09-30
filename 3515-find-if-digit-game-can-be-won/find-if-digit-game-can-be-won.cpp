class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ans1 = 0;
        int ans2 = 0;
        for(int i: nums){
            //string a = to_string(i);
            if(i<10){
                //here it don't work - int num1 = a-'0'
                ans1 += i;
            }else{
                ans2 += i;
            }
        }
        return ans1!=ans2; 
    }
};