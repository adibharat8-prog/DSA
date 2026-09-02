class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        for(int i=0; i<s.length(); i++){
            
            if(st.empty()){
                st.push({s[i],1});
                continue;
              }
            if(st.top().first != s[i]){
                st.push({s[i],1});
                continue;
            }
            
            if(!st.empty() && st.top().first == s[i]){  //Can remove !st.empty() &&
                if(st.top().second<(k-1)){
                    st.top().second++;      //No need the below one
                   // auto [ch,cnt] = st.top();
                    //st.pop();
                    //cnt++;
                    //st.push({ch,cnt});
                }else{
                    st.pop();
                }
            }      
        }
        
        string ans = "";
        while(!st.empty()){
            auto [ch,cnt] = st.top();
            st.pop();
            while(cnt>0){
                ans.push_back(ch);  //Can use this also ans+=ch;
                cnt--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};