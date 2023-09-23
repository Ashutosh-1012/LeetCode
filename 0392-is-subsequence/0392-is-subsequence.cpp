class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ans=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            for(int j=cnt;j<t.size();j++){
             if(s[i]==t[j]){
             cnt=j+1;
             ans++;
             break;
             }
            }
        }
        // cout<<cnt;
        if(ans==s.size()){
            return true;
        }
        else{
            return false;
        }
        
    }
};