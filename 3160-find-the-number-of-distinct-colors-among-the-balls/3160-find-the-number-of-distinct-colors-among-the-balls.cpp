class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int>answer;
        map<int,int>col;
        map<int,int>count;
        for(int i=0;i<n;i++){
            int a=queries[i][0];
            int b=queries[i][1];
            if(col.find(a)!=col.end()){
                int colur=col[a];
                count[colur]--;
                if(count[colur]==0){
                    count.erase(colur);
                }
            }
             col[a]=b;
             count[col[a]]++;
            answer.push_back(count.size());
        }
        return answer;
    }
};