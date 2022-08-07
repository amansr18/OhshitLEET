class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v{-1,-1};
        v[0] = findboundary(nums,target,true);
        v[1] = findboundary(nums,target,false);
        return v;
    }
    
    private:
    int findboundary(vector<int>& nums, int target, bool findfirst){
        int srt = 0,endd=nums.size()-1,ans,mid;
        int flag=1;
        while(srt<=endd){
		    mid = (srt+endd)/2;
		
		    if(nums[mid]==target){
                ans = mid;
                flag=0;
			    if(findfirst){
                    endd=mid-1;
                }
                else srt=mid+1;
		    }
		
		    else if(target<nums[mid]){
			    endd=mid-1;
		    }
		    else if(target>nums[mid]){
			    srt= mid+1;
		    }
	    }
        if(flag==0)return ans;
        else return -1;
    }
};