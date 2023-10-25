class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int flag=1;
            for(int j=i+1;j<n;j++){
              if(prices[j]<=prices[i] and flag==1){
                  ans.push_back(prices[i]-prices[j]);
                  flag=0;
                  break;
              }
            }
            if(flag==1){
                ans.push_back(prices[i]);
            }
        }
    return ans;
    }
};