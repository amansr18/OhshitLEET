class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> a;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
            a.push_back(ans);
        }
        return a;
    }
};