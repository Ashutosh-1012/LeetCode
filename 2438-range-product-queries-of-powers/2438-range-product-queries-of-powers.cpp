class Solution {
public:
    long long mod=1000000007;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> po;

        for(int i=0;i<32;i++){
            if((n&(1<<i))){
                po.push_back(pow(2,i));
            }
        }
        vector<int> ans;

        for(int i=0;i<queries.size();i++){
            int prod=1;
            for(int j=queries[i][0];j<=queries[i][1];j++){
                prod=((prod%mod)*(po[j]%mod))%mod;
            }
            prod%mod;
            ans.push_back(prod);
        }

        return ans;
    }
};