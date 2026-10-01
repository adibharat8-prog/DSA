class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                int st1 = st.top()+1;
                st.pop();
                int ed1 = i-1;
                cout<<st1<< " "<<ed1<<endl;
                reverse(s.begin()+st1,s.begin()+ed1+1);
            }
        }
        
        //for geting string except the brackets
        string ansstr = "";
        for(char ch: s){
            if(ch != '(' && ch != ')'){
                ansstr += ch;
            }
        }
        cout<<ansstr<<endl;
        return ansstr;
    }
};