class Solution {
public:
 vector<int> leftt(vector<int>heights){
        stack<int>ans;
        ans.push(-1);
        vector<int>answer(heights.size()+1);
        for(int i=0;i<heights.size();i++){
            int curr=heights[i];
            while(ans.top()!=-1 and heights[ans.top()]>=curr){
                ans.pop();
            }
            answer[i]=ans.top();
            ans.push(i);
        }
        return answer;
    }
    vector<int> rightt(vector<int>heights){
        stack<int>ans;
        ans.push(-1);
        vector<int>answer(heights.size()+1);
        for(int i=heights.size()-1;i>=0;i--){
            int curr=heights[i];
            while(ans.top()!=-1 and heights[ans.top()]>=curr){
                ans.pop();
            }
            answer[i]=ans.top();
            ans.push(i);
        }
        return answer;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>left=leftt(heights);
        vector<int>right=rightt(heights);
        for(int i=0;i<heights.size();i++){
            if(right[i]==-1){
                right[i]=heights.size();
            }
        }
        vector<int>answer(left.size());
        for(int i=0;i<left.size()-1;i++){
            int a=right[i]-left[i]-1;
            int b=heights[i];
            int ans=a*b;
            answer[i]=ans;
        }
        int hero=INT_MIN;
        for(int i=0;i<answer.size();i++){
            hero=max(hero,answer[i]);
        }
        return hero;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<vector<int>>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            vector<int>t;
            for(int j=0;j<m;j++){
                t.push_back(matrix[i][j]-'0');
            }
            ans.push_back(t);
        }
        int answer=largestRectangleArea(ans[0]);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]){
                    ans[i][j]+=ans[i-1][j];
                }else{
                    ans[i][j]=0;
                }
            }
            answer=max(answer,largestRectangleArea(ans[i]));
        }
        return answer;
    }
};