class Solution {
public:
  void create(string &s){
      char start='a';
      char mapping[300]={0};
      for(auto ch:s){
          if(mapping[ch]==0){
              mapping[ch]=start;
              start++;
          }
      }
      for(int i=0;i<s.length();i++){
          char ch=s[i];
          s[i]=mapping[ch];
      }
  }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
 vector<string>ans;
        create(pattern);
        for(auto i:words){
            string temp=i;
            create(temp);
            if(temp==pattern){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};