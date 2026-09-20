class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;
        int n = 123;
        int sum = 0;
        for(int i=0; i<s.length(); i++){
            sum += ((n - s[i])*(i+1));
        }
        
        return sum;
    }
};