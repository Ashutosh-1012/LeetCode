class Solution {
public:
 int check(int x){
    if(x==0)return 0;
    if(x==1)return 1;
    int start=1;
    int end=x;
    // cout<<x;
    int ans;
     int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid==x/mid){
           return mid;
        }else if(mid<x/mid){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
    int mySqrt(int x) {
        int ans=check(x);
        cout<<ans;
        return ans;
     }
};
