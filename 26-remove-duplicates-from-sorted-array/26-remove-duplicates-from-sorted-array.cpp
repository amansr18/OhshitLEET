class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> s(nums.begin(),nums.end());
       vector<int> a(s.begin(),s.end()); 
       nums = a;
        return s.size();
    }
};