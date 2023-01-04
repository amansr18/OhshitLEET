class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        int round=0;
        
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        for(auto it: mp){
            if(it.second==1) return -1;
            else{
                if(it.second%3 == 0){
                    round+= it.second/3;
                }
                else{
                    round+= it.second/3 + 1;
                }
            }
        }
        return round;
    }
};