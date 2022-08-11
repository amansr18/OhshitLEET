class Solution {
public:
    int lowerBound(vector<int> &nums, int target) {
        int lo=0, hi=nums.size()-1, mid, ans=-1;
        while(lo<=hi) {
            mid=(lo+hi)>>1;
            if(nums[mid]>=target) {
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
    int upperBound(vector<int> &nums, int target) {
        int lo=0, hi=nums.size()-1, mid, ans=-1;
        while(lo<=hi) {
            mid=(lo+hi)>>1;
            if(nums[mid]<=target) {
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        return ans;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
       sort(nums.begin(), nums.end());
        int lo=lowerBound(nums, target);
        int hi=upperBound(nums, target);
        vector<int> ans;
        if(lo==-1 || hi==-1) return ans;
        for(int i=lo;i<=hi;i++) ans.push_back(i);
        return ans; 
    }
};