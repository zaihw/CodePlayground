class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n==0)   return true;
        //insert 0 before first and after last element to avoid special case
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.insert(flowerbed.end(),0);
        //if have 3 consective 0s, set 2nd 0 to 1, move on check next element
        int res=0;
        for (int i=1; i<flowerbed.size()-1; i++){
            if (flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                res++;
            }
        }
        return res>=n;
    }
};