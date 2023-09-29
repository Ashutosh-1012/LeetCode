class Solution {
public:
    string decodeMessage(string key, string message) {
        char start='a';
//declare the map
        char mapping[200]={0};
        for(auto ch:key){
            if(ch!=' ' and mapping[ch]==0){
                mapping[ch]=start;
                start++;
            }
        }
        string s;
//decode the message using mapping 
        for(auto ch:message){
            if(ch==' '){
                s.push_back(ch);
            }
            else{
                s.push_back(mapping[ch]);
            }
        }
//return the decoded message 
        return s;
    }
};