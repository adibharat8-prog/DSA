class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>> newIntervals){
        vector<vector<int>> ans;
        int start1 = newIntervals[0][0];
        int end1 = newIntervals[0][1]; 

        for(int i=1; i<newIntervals.size(); i++){
            int start2 = newIntervals[i][0];
            int end2 = newIntervals[i][1];
            if(end1 >= start2){
                start1 = start1;
                end1 = max(end1,end2);
            }else{
                ans.push_back({start1,end1});
                start1 = start2;
                end1 = end2;
            }
        }
        ans.push_back({start1,end1});

        return ans;
    }

    vector<vector<int>> insert(vector<vector<int>>& intervals,vector<int>& newInterval) {
        vector<vector<int>> newIntervals;
        bool checkNewInterval = false; 

        if(intervals.size() > 0){
            for(int i=0; i<intervals.size(); i++){
                if(intervals[i][0] >= newInterval[0]){
                    newIntervals.push_back(newInterval);
                    checkNewInterval = true;
                }
                newIntervals.push_back(intervals[i]);
            }
            if(!checkNewInterval){
                newIntervals.push_back(newInterval);
            }
        }else{
            newIntervals.push_back(newInterval);
        }
        
        
        //checking for overlapping intervals
        vector<vector<int>> newAns = merge(newIntervals);
        return newAns;
    }
    
};