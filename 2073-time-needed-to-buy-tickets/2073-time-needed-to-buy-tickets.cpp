class Solution {
public:
    int timeRequiredToBuy(std::vector<int>& tickets, int k) {
        k=k%tickets.size();
        int answer=tickets[k];
        int ans = 0;
        for (int i=0;i<answer;++i) {
            for (int j=0;j<tickets.size();++j) {
                if(tickets[j]>0){
                ans++;
                tickets[j]--;
            }
            if(tickets[k]==0){
                return ans;
            }
            }
            
        }
        return ans;
    }
};