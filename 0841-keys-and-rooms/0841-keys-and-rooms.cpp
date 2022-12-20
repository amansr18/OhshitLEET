class Solution {
public:
    void dfs(vector<int> & visited,vector<vector<int>>& rooms,int v){
        if(visited[v])return;
        visited[v]=1;
        for(auto u:rooms[v]){
            dfs(visited,rooms,u);
        }
        return;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> visited(rooms.size());
        dfs(visited,rooms,0);
        for(int i=0;i<rooms.size();i++){
            if(visited[i]==0)return false;
        }
        return true;
    }
};