//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
    void dfs(int sr, int sc, vector<vector<int>> &image, vector<vector<int>> &vis, int newcolor, int src){
        vis[sr][sc]=1;
        image[sr][sc]=newcolor;
        
        int n = image.size();
        int m = image[0].size();
        
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int nrow = sr + i;
                int ncol = sc + j;
                if(abs(i)!=abs(j) && nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && image[nrow][ncol]==src){
                    dfs(nrow, ncol, image, vis, newcolor, src);
                }
            }
        }
    }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> vis(n, vector<int> (m,0));
        int src = image[sr][sc];
        dfs(sr, sc, image, vis, newColor, src);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends