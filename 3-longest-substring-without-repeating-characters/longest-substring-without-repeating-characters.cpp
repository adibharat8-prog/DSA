class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int high = 0;
        int res = INT_MIN;
        
        unordered_map<char,int> map;

        // Here the size of hashmap == length of substring then only no duplicate exist.
        // map.size() > substring.size() can't possible (map has those elements only which are already present in subsrting)
        // for map.size() < substring.size() then we need to decrement the size of map by doing removing low's frequency and low++, as low++ will may or may not reduce map.size() but it always reduce substring size.
        
        for(high=0; high<s.size(); high++){
            map[s[high]]++;
            int len = high - low + 1;

            while(map.size() < len){
                map[s[low]]--;
                if(map[s[low]] == 0){
                    map.erase(s[low]);
                }
                low++;
                len = high - low + 1;     // As low is updated so len must also be updated
            }

            len = high-low+1;
            res = max(res,len);
        }
        return (res == INT_MIN)? 0:res;
    }
};