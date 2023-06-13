class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        
        for(int i = 1; i < intervals.size(); i++){

            int cur_start = intervals[i][0];
            int cur_end = intervals[i][1];
            int prev_end = ans.back()[1];

            if(prev_end >= cur_start){

                ans.back()[1] = max(cur_end, prev_end); 
            }
            else{

                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};