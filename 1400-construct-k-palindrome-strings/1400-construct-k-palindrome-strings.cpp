class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k)
        return false;
        
        vector<int>freq(26,0);

        for(char c:s){
            freq[c-'a']++;
        }
        
        int countOdd=0;
        for(int temp : freq){
            if(temp==0)
            continue;

            if(temp%2!=0)
            countOdd++;

            if(countOdd>k)
            return false;
        }

        return true;
    }
};