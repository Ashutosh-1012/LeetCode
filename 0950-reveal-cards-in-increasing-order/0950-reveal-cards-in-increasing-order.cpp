class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int> res(n,-1);

        sort(deck.begin(),deck.end());
        int ind=0;
        int curr=0;
        for(int i=0;i<n;i++){
            cout<<deck[i]<<" curr->"<<curr<<endl;
            if(res[curr]==-1) res[curr]=deck[i];
            do{
                curr=(curr+1)%n;
            }
            while(res[curr]!=-1 && i!=n-1); 
            do{
                curr=(curr+1)%n;
            }
            while(res[curr]!=-1 && i!=n-1);

        }
        return res;

    }
};