class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int binary;
        int sum=0;
        for(int i=0;i<nums.size();i++){
         binary=nums[i];
       int cnt=0;
       for(int j=31;j>=0;j--){
            int s=i>>j;
           if(s&1){
               cnt=cnt+1;;
           }
       }
       if(cnt==k){
           sum+=nums[i];
       }
        }
        return sum;
    }
};