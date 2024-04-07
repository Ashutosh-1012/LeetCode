class Solution {
public:
    bool checkValidString(string s) { 
        int counter=0,stars=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='(') counter+=1;
            else if(s[i]==')') counter-=1;
            else stars+=1;
            if(counter<0) {
                if(counter+stars<0) return false;
                else {
                    counter+=1;
                    stars-=1;
                }
            }
        }
        counter=0;
        stars=0;
        for(int i=s.size()-1;i>=0;i--) {
            if(s[i]==')') counter+=1;
            else if(s[i]=='(') counter-=1;
            else stars+=1;
            if(counter<0) {
                if(counter+stars<0) return false;
                else {
                    counter+=1;
                    stars-=1;
                }
            }
        }
        return true;
    }
};