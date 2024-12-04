class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        if(m > n){
            return false;
        }
        if(m == 1 && n == 1){
            if(str2[0] == 'a' && str1[0] == 'z'){
                return true;
            }
            else if(str2[0] - str1[0] > 1 || str2[0] - str1[0] < 0){
                return false;
            }
        }
        int i = 0;
        int j = 0;
        while(i < n && j < m){
            if((str2[j]-str1[i]) <= 1 && (str2[j]-str1[i]) >= 0 || (str2[j] == 'a' && str1[i] == 'z')){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        cout<<j<<" ";
        return j >= m;
    }
};