class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int ans=-1;
        int end=letters.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(letters[mid]>target){
                ans=mid;
               end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(ans==-1){
            return letters[0];
        }
        return letters[ans]; 
    }
};