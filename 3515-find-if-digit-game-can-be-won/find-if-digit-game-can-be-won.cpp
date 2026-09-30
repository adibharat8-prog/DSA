class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ans1 = 0;
        int ans2 = 0;
        for(int i: nums){
            string a = to_string(i);
            if(a.length()==1){
                //here it don't work - int num1 = a-'0'
                ans1 += stoi(a);
            }else{
                ans2 += stoi(a);
            }
        }
        return (ans1==ans2)? false : true ; 
    }
};