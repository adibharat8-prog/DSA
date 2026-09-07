class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map <char,int> mp;
        // bool found = false;

        for(char ch: m){
            mp[ch]++;
        }
        for(char ch: r){
            if(mp.find(ch) != mp.end()){
                mp[ch]--;
            }else{
                return false;
            }
        }
        for(auto x: mp){
            if(x.second < 0 ){
                return false;
            }
        }

        return true;
    }
};


