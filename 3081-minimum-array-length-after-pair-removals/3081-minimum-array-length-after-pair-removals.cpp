class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n=nums.size();
        int j =n/2;
        int cnt=0;
        for(int i=0;j<n&&i<n/2;){
            if(nums[i]<nums[j]){
                cnt=cnt+2;
                j++;
                i++;
            }
            else{
                j++;
            }
        }
        return n-cnt;
    }
};