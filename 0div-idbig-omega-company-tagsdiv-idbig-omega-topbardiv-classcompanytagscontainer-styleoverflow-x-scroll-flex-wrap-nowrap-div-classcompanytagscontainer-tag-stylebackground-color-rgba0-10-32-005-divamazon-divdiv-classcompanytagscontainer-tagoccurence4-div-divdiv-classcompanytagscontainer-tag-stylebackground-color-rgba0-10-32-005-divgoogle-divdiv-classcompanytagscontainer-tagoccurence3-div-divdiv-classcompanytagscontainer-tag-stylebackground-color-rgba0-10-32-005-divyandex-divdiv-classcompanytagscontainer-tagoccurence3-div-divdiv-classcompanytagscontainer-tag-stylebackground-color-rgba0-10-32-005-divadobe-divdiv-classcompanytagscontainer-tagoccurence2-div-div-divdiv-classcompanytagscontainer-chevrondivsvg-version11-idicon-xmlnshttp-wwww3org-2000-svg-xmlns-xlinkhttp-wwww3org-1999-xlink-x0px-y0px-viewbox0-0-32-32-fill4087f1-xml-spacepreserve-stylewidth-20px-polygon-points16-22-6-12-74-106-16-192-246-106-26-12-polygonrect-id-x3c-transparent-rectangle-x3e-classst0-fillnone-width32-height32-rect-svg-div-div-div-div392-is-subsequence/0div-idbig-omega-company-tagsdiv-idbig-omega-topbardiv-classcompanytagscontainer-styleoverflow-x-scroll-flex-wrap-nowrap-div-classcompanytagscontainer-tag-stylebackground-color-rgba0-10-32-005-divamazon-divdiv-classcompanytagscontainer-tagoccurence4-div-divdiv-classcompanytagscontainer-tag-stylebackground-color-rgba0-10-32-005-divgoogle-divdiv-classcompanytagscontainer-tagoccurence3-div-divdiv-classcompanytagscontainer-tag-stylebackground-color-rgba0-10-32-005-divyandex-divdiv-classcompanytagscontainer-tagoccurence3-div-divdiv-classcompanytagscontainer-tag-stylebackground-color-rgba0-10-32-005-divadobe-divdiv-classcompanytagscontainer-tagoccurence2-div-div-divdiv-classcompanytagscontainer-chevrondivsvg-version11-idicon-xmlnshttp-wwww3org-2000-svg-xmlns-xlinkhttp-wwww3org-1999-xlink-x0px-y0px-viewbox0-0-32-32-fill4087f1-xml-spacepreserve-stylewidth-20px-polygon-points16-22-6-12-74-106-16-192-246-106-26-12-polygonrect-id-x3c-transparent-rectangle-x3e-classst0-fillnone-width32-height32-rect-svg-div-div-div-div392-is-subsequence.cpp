class Solution {
    void solve(string s, string t, int i,int j, bool &ans, int m, int n){
        if(m==0){
            ans=true;
            return;
        }
        if(s[i]==t[j]){
            if(i==m-1){
                ans = true;
                return;
            }
            if(i+1 < m && j+1 < n){
                solve(s,t,i+1, j+1,ans,m,n);
            }
        }
        else{
            if(j+1 < n){
                solve(s,t,i, j+1,ans,m,n);
            }
        }
    }
public:
    bool isSubsequence(string s, string t) {
        int m = s.size(), n = t.size();
        int i=0,j=0;
        bool ans=false;
        
        solve(s,t,i,j,ans, m, n);
        return ans;
    }
};