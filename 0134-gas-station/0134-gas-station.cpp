class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int  pos=0;
        int neg=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            pos+=gas[i]-cost[i];
            if(pos<0){
                start=i+1;
                neg+=abs(pos);
                pos=0;
            }
        }
        if(pos-neg>=0){
            return start;
        }
        else{
            return -1;
        }
    }
};