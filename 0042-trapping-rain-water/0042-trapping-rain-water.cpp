class Solution {
public:
void rightt(vector<int>height, stack<int>&ans){
    int maxi=0;
    for(int i=height.size()-1;i>=0;i--){
         maxi=max(maxi,height[i]);
         ans.push(maxi-height[i]);
    }
}
void leftt(vector<int>height, stack<int>&ans){
    int maxi=0;
    for(int i=0;i<=height.size()-1;++i){
         maxi=max(maxi,height[i]);
         int answer=maxi-height[i];
        //  cout<<answer;
         ans.push(answer);
    }
}
void print(stack<int>ans){
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    cout<<endl;
}
void reverse(stack<int>&ans){
    stack<int>answer;
    while(!ans.empty()){
        answer.push(ans.top());
        ans.pop();
    }
    ans=answer;
}
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<=2){
            return 0;
        }
        stack<int>left;
        stack<int>right;
        rightt(height,right);
        leftt(height,left);
        reverse(right);
        // print(left);
        // print(right);
        int answer=0;
        while(!left.empty()){
          int a=left.top();
          int b=right.top();
          if(a==0 or b==0){
              left.pop();
              right.pop();
          }
          else{
              answer+=min(a,b);
               left.pop();
               right.pop();
          }
        }
        return answer;
    }
};