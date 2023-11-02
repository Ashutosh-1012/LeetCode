class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return 0;
       long long int ans=0;
       long long  int d=x;
        while(d){
            ans*=10;
            int a=d%10;
            ans+=a;
            d/=10;
        }
        if(x==ans)return 1;
        else return 0;
    }
};