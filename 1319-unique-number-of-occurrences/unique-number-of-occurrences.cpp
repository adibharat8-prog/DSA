class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int &x: arr){
            mp[x]++;
        }
        unordered_set <int> st;
        int cnt = 0;
        for(auto x: mp){
            cnt++;
            st.insert(x.second);
        }
        return (st.size() == cnt);
        //return (st.size() == cnt)? true: false;   can be written also 
    }
};