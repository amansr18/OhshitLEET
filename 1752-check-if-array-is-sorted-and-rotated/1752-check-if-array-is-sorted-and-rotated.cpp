class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        if(nums[nums.size()-1]>nums[0])count++;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1])count++;
        }
        if(count>1) return false;
        else return true;
    }
};