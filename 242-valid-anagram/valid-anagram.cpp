class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        vector <int> arr(256,0);    //Can be arr(26,0) -> only small alphabets needed
        
        for(int i=0; i<s.length(); i++){
            arr[s[i] - 'a']++;
        }

        for(int i=0; i<t.length(); i++){
            arr[t[i] - 'a']--;
            if (arr[t[i] - 'a'] < 0){
                return false;
            }
        }
        return true;
        
    }
};