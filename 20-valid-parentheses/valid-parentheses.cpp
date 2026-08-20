class Solution {
public:
    bool isValid(string s) {
        stack<int> ans;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if (!ans.empty()) {
                    if (s[i] == ')' && ans.top() == '(') {
                        ans.pop();
                    } else if (s[i] == ']' && ans.top() == '[') {
                        ans.pop();
                    } else if (s[i] == '}' && ans.top() == '{') {
                        ans.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            } else {
                ans.push(s[i]);
            }
        }
        return ans.empty() ? true : false;
    }
};