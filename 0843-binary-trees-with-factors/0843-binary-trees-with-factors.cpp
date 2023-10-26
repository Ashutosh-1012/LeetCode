class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int mod=1e9+7;
        sort(arr.begin(),arr.end());
        unordered_map<int,long>mp;
        mp[arr[0]]=1;
        for(int i=1; i<arr.size(); i++){
            long cnt=1;
            for(auto it:mp){
                int nr=it.first;
                if(arr[i]%nr==0 && mp.find(arr[i]/nr)!=mp.end()){
                    cnt+=mp[nr]*mp[arr[i]/nr];
                }
            }
            mp[arr[i]]=cnt;
        }
        
         long ans=0;
         for(auto it:mp){
             ans=(ans+it.second)%mod;
         }
         return ans;
    }
};