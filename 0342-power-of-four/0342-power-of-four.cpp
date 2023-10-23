class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)return 1;
        long long int i;
        for(i=4;i<=n;i=i*4){
            if(n==i){
                return true;

            }
        }
        return false;
    }
};