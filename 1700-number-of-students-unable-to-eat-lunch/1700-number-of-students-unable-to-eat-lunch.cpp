class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int one =0;
        int zero=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==1){
                one++;
            }
            else{
                zero++;
            }
        }
        // cout<<zero<<" "<<one;
        int answer=0;
        for(int i=0;i<sandwiches.size() and zero>=0 and one>=0;i++){
             if(sandwiches[i]==0 and zero>0){
                 zero--;
                 answer++;
             }
             else if (sandwiches[i]==1 and one>0){
                 one--;
                 answer++;
             }
             else{
                 break;
             }
        }
        cout<<answer;
        answer=students.size()-answer;
        return answer;
    }
};