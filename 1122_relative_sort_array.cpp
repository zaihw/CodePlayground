class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=0;
        int tmp=arr1[0];
        if (arr2.size()<2)  return arr1;
        //sort 1st half
        for (int j=0; j<arr2.size(); j++){
            for (int i=0; i<arr1.size(); i++){
                if (arr2[j]==arr1[i]){
                    tmp=arr1[n];
                    arr1[n]=arr1[i];
                    arr1[i]=tmp;
                    n++;
                }
            }
        }
        //sort 2nd half
        std::sort(arr1.begin()+n, arr1.end());
        
        return arr1;
    }
};