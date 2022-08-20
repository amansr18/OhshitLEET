class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int a:nums){
            m[a]++;
            if(m[a]>(nums.size()/2)) return a;
        }
        return -1;
    }
};