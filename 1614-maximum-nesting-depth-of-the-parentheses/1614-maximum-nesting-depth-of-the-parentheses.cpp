class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int cur_max=0,m=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
               cur_max++;
                m=max(m, cur_max);
            }
            else if(s[i]==')'){
                cur_max--;
            }
            
        }
        return m;
    }
};