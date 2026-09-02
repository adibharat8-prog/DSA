class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        set<int> st;
        for(int x: candyType){
            st.insert(x);
        }
        
        
        int n = candyType.size();
        return (st.size() < n/2)? st.size(): n/2;
    }
};