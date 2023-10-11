class Solution {
public:
   int check(string s,int i,int j){
       int cnt=0;
       while(i>=0 and j<s.length() and s[i]==s[j]){
           cnt++;
           i--;
           j++;
       }
       return cnt;
   }
    int countSubstrings(string s) {
      
      int count=0;
      for(int i=0;i<s.length();i++){

          int even=check(s,i,i);
          int odd=check(s,i,i+1);
          count+=even+odd;
      }
      return count;

        
    }
};