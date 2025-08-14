class Solution {
public:
    string largestGoodInteger(string num) {
      if(num.size()<3){
          return "";
      }
        vector<char>ans;
        char answer='a'-'a';
        int cnt=0;
        for(int i=1;i<num.size();i++){
            if(num[i]==num[i-1]){
                answer=num[i];
                 ++cnt;
            }
            else{
                if(cnt>=2){
                    ans.push_back(answer);
                }
                cnt=0;
            }
        }
          if(cnt>=2){
             ans.push_back(answer);
        }
        string a="";
        int n=ans.size();
        if(n==0){
            return "";
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<3;i++){
          a+=ans[n-1];
        }
        return a;
    }
};