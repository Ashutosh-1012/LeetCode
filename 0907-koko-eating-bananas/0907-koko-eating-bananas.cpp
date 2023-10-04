class Solution {
public:
  long long int calculate(vector<int>v, int a ){
    long long int ans=0;
      for(int i=0;i<v.size();i++){
          ans+=ceil((double)v[i]/(double)a);
      }
      return ans;
  }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int low=1;
        long long int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long int cal=calculate(piles,mid);
            if(cal<=h){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return low;
    }
};