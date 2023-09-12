class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//initilize a vector to store answer to return mac row with max ones
        vector<int>ans;
//it store row with max ones
        int maxrow=-1;
//it store max number of ones in a row
        int maxones=-1;
        int row=mat.size();
        for(int i=0;i<row;i++){
//count max ones in a row
            int countones=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    countones++;
                }
            }
//compare the maxones with countones and update 
            if(maxones<countones){
                maxones=countones;
                maxrow=i;
            }
        }
//push in a vector to return answer
        ans.push_back(maxrow);
        ans.push_back(maxones);
        return ans;
    }
};