class Solution {
public:
    vector<int> p;
    int find(int x) {
        return p[x] == x ? x : find(p[x]);
    }
    
    int removeStones(vector<vector<int>>& stones) {
        int q = (int) stones.size();
        p.resize(q + 1, 0);
        
        for(int i = 0; i <= q; i++) p[i] = i;
        
        for(int i = 0; i < q; i++) {
            for(int j = i + 1; j < q; j++) {
                
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]) {
                    
                    int m = find(i);
                    
                    int n = find(j);
                    
                    if(m != n) p[n] = m;
                }
            }
        }
        int connected = 0;
        
        for(int i = 0; i < q; i++) connected += p[i] == i;
        return q - connected; 
    }
};