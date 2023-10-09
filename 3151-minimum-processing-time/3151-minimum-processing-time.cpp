class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {     
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end());
        int n=tasks.size();
        vector<int>ans;
        int cnt=0;
        int j=processorTime.size()-1;
        int an=0;
        int maxi=INT_MIN;
       for(int i=0;i<n;i++){
           if(cnt<=3){
               an=processorTime[j];
               ++cnt;
               maxi=max(maxi,tasks[i]);
                if(cnt>=4){
               cnt=0;
               j--;
                    an+=maxi;
               ans.push_back(an);
                    // cout<<an;
                    maxi=INT_MIN;
               an=0;
           }
           }
          
       }
        int anss=*max_element(ans.begin(),ans.end());
        return anss;
    }
};