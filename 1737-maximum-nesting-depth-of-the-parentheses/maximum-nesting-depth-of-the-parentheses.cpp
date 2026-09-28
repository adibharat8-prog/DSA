class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxi = 0;
        int cnt = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                cnt++;
            }else if(s[i] == ')'){
                maxi = max(cnt,maxi);
                cnt--;
                st.pop();
            }
        }
        return maxi;
    }
};