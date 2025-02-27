class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {

        priority_queue<int> q;
        for(auto i:gifts)
        {
            q.push(i);
        }

        for(int i=0;i<k;i++)
        {

            int temp=sqrt(q.top());
            q.pop();
            q.push(temp);
           

        }

        long long sum=0;
        while(!q.empty())
        {
            int temp=q.top();
            q.pop();
            sum+=temp;;
        }

        return sum;
        
    }
};