//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{

private:
    void dfs(int row, int col, int n, int m, vector<vector<int>> &vis, vector<vector<char>> &mat){
        vis[row][col]=1;
        
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]=='O'){
                dfs(nrow, ncol, n, m, vis, mat);
            }
        }
        
    }
    
    
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>> vis(n, vector<int> (m,0));
        
        for(int i=0;i<m;i++){
            
            if(!vis[0][i] && mat[0][i]=='O'){
                dfs(0, i, n, m, vis, mat);
            }
            
            if(!vis[n-1][i] && mat[n-1][i]=='O'){
                dfs(n-1, i, n, m, vis, mat);
            }
        }
        for(int j=0; j<n;j++){
            
            if(!vis[j][0] && mat[j][0]=='O'){
                dfs(j, 0, n, m, vis, mat);
            }
            if(!vis[j][m-1] && mat[j][m-1]=='O'){
                dfs(j, m-1, n, m, vis, mat);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]=='O'){
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends