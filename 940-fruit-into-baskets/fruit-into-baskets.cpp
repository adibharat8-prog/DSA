class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int high = 0;
        int res = INT_MIN;
        unordered_map<int,int> map;
        for(high = 0; high<fruits.size(); high++){
            map[fruits[high]]++;

            while(map.size()>2){
                map[fruits[low]]--;
                if(map[fruits[low]] == 0){
                    map.erase(fruits[low]);
                }
                low++;
            }

            int len = high - low + 1;
            res = max(res,len);
        }
        return res;
    }
};