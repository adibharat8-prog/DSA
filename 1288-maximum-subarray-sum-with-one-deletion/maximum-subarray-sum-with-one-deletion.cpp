class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDel = arr[0];
        int oneDel = 0;
        int ans = arr[0];

        for(int i=1; i<arr.size(); i++){
            int prevNoDel = noDel; //To save best till (i-1) no delete

            //Normal Kadan
            int v1 = arr[i];           //Start own party
            int v2 = noDel + arr[i];   //Joins the party
            noDel = max(v1,v2);         //becomes no delete till i

            //For one delete 
            int v3 = oneDel + arr[i];  //One is already deleted
            int v4 = prevNoDel;         ///no delete till i-1
            oneDel = max(v3,v4);

            ans = max(ans, max(oneDel, noDel));
        }
        return ans;
    }
};