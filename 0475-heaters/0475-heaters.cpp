class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int i,ind,ans=0,dif1,dif2;
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());

        for(i=0;i<houses.size();i++){
            ind=lower_bound(heaters.begin(),heaters.end(),houses[i])-heaters.begin();
            if(ind<heaters.size() and ind-1>=0){
                dif1=abs(heaters[ind]-houses[i]);
                dif2=abs(heaters[ind-1]-houses[i]);
                ans=max(ans,min(dif1,dif2));
            }
            else if(ind-1>=0){
                dif1=abs(heaters[ind-1]-houses[i]);
                ans=max(ans,dif1);
            }
            else if(ind<heaters.size()){
                dif1=abs(heaters[ind]-houses[i]);
                ans=max(ans,dif1);
            }
        }
        return ans;
    }
};