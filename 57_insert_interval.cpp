class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        //same as question "merge interval"
        //add newInterval and sort 
        std::vector<vector<int>> result;
        intervals.push_back(newInterval);
        std::sort(intervals.begin(), intervals.end());
        //loop thru all elements in intervals
        for(int i=0; i<intervals.size(); i++) { 
            int size = result.size();
            // initialize vector<vectot<int>> result with intervals[0]
            // compare newInterval[0] with the last element in vector<vector<int>> result
            // if intervals[i][0] <= result[size-1][1], merge by update result[size-1][1]
            // otherwise lock result[size-1][1] value, move on to add next element to result
            if( size>0 && result[size-1][1] >= intervals[i][0]) {
                //merge interval by update upper bound of last element in result vector
                result[size-1][1] = max(result[size-1][1], intervals[i][1]); 
            }else{
                //push to result vector
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};