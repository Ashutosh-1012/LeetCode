class Solution {
public:

bool poss(int x, vector<int>& arr, int n){
   for(int prod : arr){
    n -= (prod + x -1)/x; // ceil

    if(n < 0) {
        return false;
   } 
   }

    
   return true;
}
    int minimizedMaximum(int n, vector<int>& arr) {
        int m= arr.size();
        int l=1;
        int r = *max_element(arr.begin(), arr.end());

        int res=0;

        while(l<=r){
            int mid = l+ (r-l)/2;

            if(poss(mid, arr, n)){
                res = mid;
                r = mid-1;
            }

            else {
                l = mid+1;
            }
            
        }
        return res;
    }
};