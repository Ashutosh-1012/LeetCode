class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int ans;
      int answer;
        for(int i=0;i<nums.size();i++){
           ans=nums[i];
           if(ans<0){
             ans*=-1;
           }
           if(nums[ans]<0){
             answer=ans;
           }else{ nums[ans]=nums[ans]*(-1);}
          
        }
        for(int ii=0;ii<nums.size();ii++){
          nums[ii]=nums[ii]*(-1);
        }
        return answer;
    }
};