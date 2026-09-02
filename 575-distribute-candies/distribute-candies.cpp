class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;
        for(int x: candyType){
            mp[x]++;
        }
        int lmt = (candyType.size())/2;
        int cnt = 0;
        for(auto x: mp){
            if(cnt<lmt){    
            cnt++;
            }
        }
        return cnt;
    }
};