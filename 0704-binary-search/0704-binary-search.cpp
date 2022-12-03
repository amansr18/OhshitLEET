class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int high=n-1,low=0;
        while(low <= high){
            int mid = high - (high-low)/2;
            if(target == nums[mid]) return mid;
            if(target <= nums[mid]){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};