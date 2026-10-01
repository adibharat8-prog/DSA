class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        while(i<s.length()){
            int len = s.length();
            reverse(s.begin()+i ,s.begin() + min((i+k) ,len) );
            i += 2*k;
        }
        return s;
    }
};