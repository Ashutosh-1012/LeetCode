class Solution {
public:
    long long maximumHappinessSum(vector<int>& ha, int k) 
    {
        long long sum=0;
        int count=0;
        int i=ha.size()-1;
        sort(ha.begin(),ha.end());
        while(k)
        {
            ha[i]+=count;
            // cout<<ha[i]<<endl;
            if(ha[i]<0)
                break;
            sum+=ha[i];
            --count;
            --k;
            --i;
        }
        return sum;
    }
};