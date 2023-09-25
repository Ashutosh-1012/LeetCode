class Solution {
public:
     int lowerbond(vector<int>arr, int x) {
        int start=0;
        int end=arr.size()-1;
        int ans=end;
        while(start<=end){
          int mid=(start+end)/2;
          if(arr[mid]>=x){
            ans=mid;
            end=mid-1;
          }
          else if(arr[mid]<x){
            start=mid+1;
          }
          else{
            end=mid-1;
          }
        }
        return ans;
    }

    vector<int> bs(vector<int>& arr, int k, int x) {
        int high=lowerbond(arr,x);
        int low=high-1;
        while(k--){
          if(high>=arr.size()){
            low--;
          }
          else if(low<0){
            high++;
          }
          else if(x-arr[low]>arr[high]-x){
            high++;
          }
          else{
            low--;
          }
        }

        return vector<int>(arr.begin()+low+1,arr.begin()+high);

    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return bs(arr,k,x);
    }
};