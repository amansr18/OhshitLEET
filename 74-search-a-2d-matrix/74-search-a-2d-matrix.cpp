class Solution {
public:
    int binary_search(vector<int>& nums, int target){
        int n=nums.size();
        int left=0,right=n-1,mid;
        while(left<=right){
            mid= right - (right-left)/2;
            if(target == nums[mid]) return 1;
            else if(target<nums[mid]){
                right = mid-1;
            }
            else left=mid+1;
        }
        return 0;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int p = binary_search(matrix[i],target);
            if(p==1){
                return true;
            }
        }
        return false;
    }
};