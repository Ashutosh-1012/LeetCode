class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        int n = s.size();
        for(auto ele:s){
            if(st.empty()){
                st.push(ele);
            }else{
                int temp = st.top();
                if(temp != ele && tolower(temp) == tolower(ele)){
                        st.pop();
                    }else{
                        st.push(ele);
                    }
            }
        }
        string str = "";
        while(!st.empty()){
            str =  st.top()+str;
            st.pop();
        }
        
        return str;
    }
};