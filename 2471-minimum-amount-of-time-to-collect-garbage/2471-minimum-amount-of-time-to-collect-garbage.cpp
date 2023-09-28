class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickp=0;
        int pickg=0;
        int pickm=0;

        int lastp=0;
        int lastg=0;
        int lastm=0;

        int travelp=0;
        int travelg=0;
        int travelm=0;

        for(int i=0;i<garbage.size();i++){
            string s=garbage[i];
            for(int j=0;j<s.length();j++){
                char ch=s[j];
             if(ch=='P'){
                 pickp++;
                 lastp=i;
             }
             else if(ch=='G'){
                 pickg++;
                 lastg=i;
             }
             else if(ch=='M'){
                 pickm++;
                 lastm=i;
             }
            }
        }
        for(int i=0;i<lastp;i++){
           travelp+=travel[i];
        }
        for(int i=0;i<lastg;i++){
           travelg+=travel[i];
        }
        for(int i=0;i<lastm;i++){
           travelm+=travel[i];
        }
        int ans=(travelp+pickp)+(travelg+pickg)+(travelm+pickm);
        return ans;
    }
};