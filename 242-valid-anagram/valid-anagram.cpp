class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map <char,int> map;
        for(char ch1:s){
            map[ch1]++;
        }
        for (char ch2:t){
            map[ch2]--;
            if(map[ch2]<0){
                return false;
            }
        }
        return true;
    }
};