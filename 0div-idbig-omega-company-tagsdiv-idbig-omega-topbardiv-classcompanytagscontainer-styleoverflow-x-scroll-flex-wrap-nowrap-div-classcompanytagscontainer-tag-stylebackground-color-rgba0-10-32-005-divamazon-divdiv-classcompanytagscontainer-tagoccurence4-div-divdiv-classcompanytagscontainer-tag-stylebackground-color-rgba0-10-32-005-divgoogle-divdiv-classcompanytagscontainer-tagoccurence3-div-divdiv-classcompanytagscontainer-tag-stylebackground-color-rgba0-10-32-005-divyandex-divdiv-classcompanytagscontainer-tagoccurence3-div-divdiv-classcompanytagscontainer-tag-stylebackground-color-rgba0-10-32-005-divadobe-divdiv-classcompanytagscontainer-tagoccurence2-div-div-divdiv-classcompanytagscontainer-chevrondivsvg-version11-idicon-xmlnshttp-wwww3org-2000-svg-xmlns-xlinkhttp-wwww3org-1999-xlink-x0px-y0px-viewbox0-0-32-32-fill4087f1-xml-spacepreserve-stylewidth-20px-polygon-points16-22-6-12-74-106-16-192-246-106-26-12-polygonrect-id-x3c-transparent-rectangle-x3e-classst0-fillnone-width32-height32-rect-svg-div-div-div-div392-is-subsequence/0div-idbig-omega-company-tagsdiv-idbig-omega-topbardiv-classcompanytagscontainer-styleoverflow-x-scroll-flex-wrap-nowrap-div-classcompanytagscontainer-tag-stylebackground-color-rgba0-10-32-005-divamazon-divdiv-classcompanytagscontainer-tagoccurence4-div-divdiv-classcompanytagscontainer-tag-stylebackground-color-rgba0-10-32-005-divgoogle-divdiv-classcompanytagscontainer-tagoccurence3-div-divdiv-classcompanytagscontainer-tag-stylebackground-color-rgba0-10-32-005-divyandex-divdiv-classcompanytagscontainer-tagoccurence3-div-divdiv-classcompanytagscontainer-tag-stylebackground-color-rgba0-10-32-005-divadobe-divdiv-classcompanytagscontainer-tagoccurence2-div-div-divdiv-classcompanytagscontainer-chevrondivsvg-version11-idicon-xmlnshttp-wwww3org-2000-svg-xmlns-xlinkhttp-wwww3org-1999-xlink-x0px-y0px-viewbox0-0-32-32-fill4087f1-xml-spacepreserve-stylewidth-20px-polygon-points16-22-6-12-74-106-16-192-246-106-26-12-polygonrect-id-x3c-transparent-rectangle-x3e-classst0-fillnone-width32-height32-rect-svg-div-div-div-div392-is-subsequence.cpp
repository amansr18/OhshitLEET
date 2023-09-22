class Solution {
    void solve(string s, string t, int i,int j, int last, bool &ans){
        if(s.size()==0){
            ans=true;
            return;
        }
        if(s[i]==t[j]){
            if(i==s.size()-1){
                ans = true;
                return;
            }
            last = j;
            if(i+1 < s.size() && j+1 < t.size()){
                solve(s,t,i+1, j+1,last,ans);
            }
        }
        else{
            if(j+1 < t.size()){
                solve(s,t,i, j+1,last,ans);
            }
        }
    }
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0,last=0;
        bool ans=false;
        solve(s,t,i,j,last,ans);
        return ans;
    }
};