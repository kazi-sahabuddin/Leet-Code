class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        stk.push(s[0]);
        for(int i = 1; i<s.size(); i++){
            if(!stk.empty() && stk.top() == s[i]){
                stk.pop();
            } else{
                stk.push(s[i]);
            }
        }
        string ans;
        while(!stk.empty())
        {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
