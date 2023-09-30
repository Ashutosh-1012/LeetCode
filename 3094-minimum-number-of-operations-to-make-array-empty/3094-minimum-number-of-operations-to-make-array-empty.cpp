class Solution {
public:
    int minOperations(vector<int>& v) {
        map<int,int>m;
        int n=v.size();
        for(auto i:v)
            m[i]++;
        int c=0;
        for(auto i:m)
        {
            if(i.second==1)
                return -1;
            c=c+ceil((i.second)/(3*1.0));
           
        }
        return c;
    }
};