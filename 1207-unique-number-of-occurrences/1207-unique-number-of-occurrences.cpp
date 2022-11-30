class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        
        unordered_map<int, int> mp;
        
        for(auto it:arr){
            mp[it]++;
        }
        
        unordered_set<int> s;
        
        for(auto it:mp){
            int freq = it.second;
            s.emplace(freq);
        }
        
        return mp.size() == s.size();
        
    }
};