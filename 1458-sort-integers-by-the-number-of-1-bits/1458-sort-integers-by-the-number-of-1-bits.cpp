class Solution {
public:
   static bool compare(int a,int b){
       int aa=__builtin_popcount(a);
        int bb=__builtin_popcount(b);
        if(aa==bb){
            return a < b;
        }
        return aa<bb;
   }
    vector<int> sortByBits(vector<int>& arr) {
       sort(arr.begin(),arr.end(),compare);
       return arr;
    }
};