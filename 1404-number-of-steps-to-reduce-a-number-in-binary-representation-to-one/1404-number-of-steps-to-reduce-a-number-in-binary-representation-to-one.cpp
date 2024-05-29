class Solution {
public:
    int numSteps(string s) {
        int carry = 0, steps = 0;
        for(int i = s.length() - 1; i > 0; i--) {
            if((s[i] - '0') + carry == 1) {
                steps += 2;
                carry = 1;
            } else {
                steps++;
            }
        }
        return steps + carry;
    }
};
// class Solution {
// public:
//     int numSteps(string s) {
//         // string str=s;
//        long long  int ans=0;
//         for(int i=s.size()-1;i>=0;i--){
//             if(s[i]=='1'){
//                 ans+=pow(2,(s.size()-1-i));
//             }
//         }
//         // cout<<ans;
//         long long int answer=0;
//         while(ans!=1){
//             if(ans%2==0){
//                 ans=ans/2;
//             }
//             else{
//                 ans+=1;
//             }
//             answer+=1;
//         }
//         return answer;
//     }
// };