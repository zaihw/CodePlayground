class Solution {  
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //exception handling
        if (intervals.size() <= 0) return intervals;        
        
        //sort 2d vector using sort function
        std::sort(intervals.begin(), intervals.end());
        
        //new 2d vector to store output
        std::vector<vector<int>> result;
        
        //loop thru intervals
        for(int i=0; i<intervals.size(); i++) { 
            int size = result.size();
            // initialize vector<vectot<int>> result with intervals[0]
            // compare intervals[i][0] with the last element in vector<vector<int>> result
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