class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int l=n-1;
        for(int i=0;i<=l;){
           if(nums[i]==0){
               swap(nums[i],nums[j]);
               j++;
               i++;
           }
           else if(nums[i]==2){
               swap(nums[i],nums[l]);
               l--;
            //    i--;
           }else{
               i++;
           }
        }
        // return nums;
    }
};