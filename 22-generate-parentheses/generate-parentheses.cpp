class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        // helper function
        function<void(string, int, int)> solve =
        [&](string s, int open, int close) {

            if (open == n && close == n) {
                ans.push_back(s);
                return;
            }

            if (open < n) {
                solve(s + "(", open + 1, close);
            }

            if (close < open) {
                solve(s + ")", open, close + 1);
            }
        };

        solve("", 0, 0);
        return ans;
    }
};