class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<mat[i].size();j++){
                sum+=mat[i][j];
            }
            v[i]+=sum;
        }
     vector<int>ans,answer;
     ans=v;
     sort(v.begin(),v.end());
     for(int i=0;i<k;i++){
         for(int j=0;j<n;j++){
             if(v[i]==ans[j]){
               ans[j]=1000;
                 answer.push_back(j);
                 break;
             }
         }
     }
     return answer;

    }
};