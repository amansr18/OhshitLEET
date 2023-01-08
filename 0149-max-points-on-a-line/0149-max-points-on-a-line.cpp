class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
        int n = points.size();
        
        if (n == 0) return 0;
        if (n <= 2) return n;
        
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_map<long double,int> mp;
            int samePoint = 0, sameX = 1;
            for(int j=0;j<n;j++){
                
                if (i == j){
				    continue;
			    }
                
                if (points[j][0] == points[i][0] && points[j][1] == points[i][1]){
				    samePoint++;
			    }
                if (points[j][0] == points[i][0]) {
				    sameX++;
				    continue;
		    	}
                
                
                long double val = (long double)(points[j][1]-points[i][1])/(long double)(points[j][0]-points[i][0]);
                if (mp.count(val) == 0){
				    mp[val] = 2;
			    }
			    else{
			        mp[val]++;
		        }
                
            }
        
            for(auto it: mp){
                ans = max(ans, it.second + samePoint);
            }
            ans = max(ans, sameX);
        }
        return ans;
    }
};