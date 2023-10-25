class Solution {
public:
    int kthGrammar(int n, int k) {
        int t = pow(2,n-1);
        int sign=1;
        while(t>=2)
        {
            if(k>t)k-=t,sign*=-1;
            t/=2;
        }
        int ans = --k;
        if(sign ==-1)return !k;
        return k;
    }
};