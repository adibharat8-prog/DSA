class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        //unordered_map<int,int> mp;
        set<int> st;
        for(int x: candyType){
            st.insert(x);
        }
        
        // for(auto x:mp){
        //     st.insert(mp);
        // }

        int n = candyType.size();
        return (st.size() < n/2)? st.size(): n/2;
    }
};