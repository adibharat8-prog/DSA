class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1); // n size vector of each element = -1 
        stack<int> st;

        for(int i=(2*n-1); i>=0; i--){  
            //For circular array, we assume copy of nums in from of it
            // [1,2,1,1,2,1]

            int idx = i%n;  //To bind circular

            while(!st.empty() && st.top() <= nums[idx]){
                st.pop();
            }
            //Here comes only when stack is empty or st.top() > nums[idx]
            if(i<n){
                if(!st.empty()){
                    ans[idx] = st.top();
                }
                //If stack is empty then only change ans content else leave at -1.
            }

            st.push(nums[idx]);     //Needed every time
        }
        return ans;
    }
};