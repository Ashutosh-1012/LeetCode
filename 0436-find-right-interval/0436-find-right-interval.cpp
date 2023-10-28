class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> result;
        map<int,int> mapa;
        for(int i=0; i<intervals.size(); i++){
            mapa[intervals[i][0]] = i;
        }
        for(const auto& interval : intervals){
            auto it = mapa.lower_bound(interval[1]);
            if(it!=mapa.end()){
                result.push_back(it->second);
            }
            else{
                result.push_back(-1);
            }
        }
        return result;
    }
};