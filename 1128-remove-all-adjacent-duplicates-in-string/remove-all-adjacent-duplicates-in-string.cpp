class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char ch: s){
            if(!st.empty()){
                if(st.top() == ch){
                st.pop();
                }else{
                    st.push(ch);
                }
            }else{
                st.push(ch);
            }
        }
        string ans="";
        while(!st.empty()){
            ans = ans + st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};