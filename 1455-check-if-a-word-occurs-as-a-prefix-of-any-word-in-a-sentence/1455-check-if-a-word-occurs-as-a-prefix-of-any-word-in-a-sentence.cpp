class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n=searchWord.size();
        istringstream iss(sentence);
        string s;
        int i = 1;
         while (iss >> s) {
            if( s.substr(0,n)==searchWord)
            return i;
            i++;
         }   
         return -1;
    }
};