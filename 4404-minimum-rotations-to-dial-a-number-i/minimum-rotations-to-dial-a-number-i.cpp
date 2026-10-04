class Solution {
public:
    int minRotations(string s) {
        int ans = 0;
        int prev = 0;
        for(char ch: s){
            int curr = ch -'0';
            int val1 = abs(prev-curr);
            int val2 = 10 - val1;
            ans += min(val1,val2);
            prev = curr;
        }
        return ans;
    }
};