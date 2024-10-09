class Solution {
public:
    int minAddToMakeValid(string s) {
     
    stack<int> stk;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            stk.push('(');
        else
        {
            if (stk.size() && stk.top() == '(')
                stk.pop();
            else
                stk.push(')');
        }
    }
    cout << stk.size() << endl;
    return stk.size();   
    }
};