class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
         map<int,int> lost;
        for (auto i : matches)
        {
            if (!lost.count(i[0])) lost[i[0]] = 0;
            lost[i[1]]++;
        }
        
        vector<int> zero, ones;
        for (auto[k,l] : lost)
        {
            if (l == 0) zero.push_back(k);
            if (l == 1) ones.push_back(k);
        }
        
        return {zero,ones};
    }
};