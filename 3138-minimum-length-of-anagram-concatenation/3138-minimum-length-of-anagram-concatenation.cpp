class Solution {
public:
    int minAnagramLength(string s) {
      std::unordered_map<char, int> charCount;
        for (size_t i = 0; i < s.size(); ++i) {
            char ch = s[i];
            charCount[ch]++;
        }

        int gcdValue = 0;
        for (const auto& entry : charCount) {
            if (gcdValue == 0) {
                gcdValue = entry.second;
            } else {
                gcdValue = std::gcd(gcdValue, entry.second);
            }
        }

        bool flag = true;
        int result = 0;
        while (flag) {
            result = s.size() / gcdValue;
            flag = false;
        }

        return result;
        // int ans=0;
        
        // for(int i=0;i<s.size();i++){
        //     bool t=true;
        //     string a=s.substring(0,i);
        //     sort(a.begin(),a.end());
        //     for(int j=i+1;j<s.size();j+=i){
        //         string b=s.substring(i+1,i+1+i);
        //         sort(b.begin().b.end());
        //         if(a==b and t=true){
        //             t=true;
        //             ans=i;
        //         }
                
        //     }
        // }
        // return ans;
    }
};