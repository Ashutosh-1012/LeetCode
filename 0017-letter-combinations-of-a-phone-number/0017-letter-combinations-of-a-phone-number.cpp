class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>key={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   if(digits.empty()){
       return {};
   }
        vector<string>ans;
        ans.push_back("");
        for(auto i:digits){
            vector<string>t;
            for(auto j:key[i-'0']){
                for(auto k:ans){
                    t.push_back(k+j);
                }

            }
            ans.clear();
            ans=t;
        }
        return ans;
    }
};