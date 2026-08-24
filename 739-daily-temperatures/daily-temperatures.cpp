class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        stack<int> st;
        
        ans[n - 1] = 0;
        st.push(n - 1);     //We put index on stack
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            // Here comes only when stack is empty or nums[st.top()] > nums[i]

            if (st.empty()) {
                ans[i] = 0;
            } else {
                ans[i] = st.top() - i;
            }
            st.push(i);
        }
        return ans;
    }
};