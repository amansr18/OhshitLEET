class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0,sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            if(leftsum==sum-leftsum-nums[i]){
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;
    }
};