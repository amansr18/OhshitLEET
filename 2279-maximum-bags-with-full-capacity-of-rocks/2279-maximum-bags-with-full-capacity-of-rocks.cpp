class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count=0;
        int n = rocks.size();
        vector<int> req;
        for(int i=0;i<n;i++){
            if((capacity[i]-rocks[i])==0) count++;
            else{
                req.push_back(capacity[i]-rocks[i]);
            }
        }
        sort(req.begin(),req.end());
        for(int i=0;i<req.size();i++){
            if(additionalRocks>=req[i]){
                additionalRocks-=req[i];
                count++;
            }
        }
        return count;
    }
};