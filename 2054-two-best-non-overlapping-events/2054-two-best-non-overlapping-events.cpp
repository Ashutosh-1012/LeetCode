class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int n = events.size();
        int res = 0;
        vector<array<int, 3>> time;
        
        for(int i=0;i<n;i++){
            time.push_back({events[i][0], 1, events[i][2]});
            time.push_back({events[i][1] + 1, 0, events[i][2]});
        }
        int max_val = 0;
        sort(time.begin(),time.end());
        for(int i=0;i<time.size();i++){
            if(time[i][1] == 1){
                res = max(res, time[i][2] + max_val);

            }else{
                max_val = max(max_val, time[i][2]);
            }
        }
       return res;

    }
};