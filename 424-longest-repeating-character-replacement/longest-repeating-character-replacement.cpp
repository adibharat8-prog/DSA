class Solution {
public:

    int maxEle(vector<int> &arr){
        int maxI =INT_MIN;
        for(int i=0; i<arr.size(); i++){
        maxI = (maxI<arr[i]) ? arr[i] : maxI;
        }
    return maxI;
    }


    int characterReplacement(string s, int k) {
        int low = 0;
        int high = 0;
        int res = INT_MIN;
        vector<int> arr(256,0); //Initiate array of 256 size with 0
    
        for(high=0; high<s.size(); high++){
            arr[s[high]]++;
            int len = high-low+1;
            int maxFreq = maxEle(arr);
            int diff = len-maxFreq;

            while(diff>k){
                arr[s[low]]--;
                low++;     //No need to erase as her we use array not hashmap
                
                //Low change so they are also change
                len = high - low + 1;
                maxFreq = maxEle(arr);
                diff = len - maxFreq;

            }

            len = high - low + 1;
            res = max(res,len);

        }
        return res;
    }
};