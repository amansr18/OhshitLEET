class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];   
        }
        
        
        for(int i=0;i<queries.size();i++){
            if(queries[i]>=nums[n-1]) ans.push_back(n);
            else{
                for(int j=0;j<n;j++){
                if(queries[i]<nums[j]){
                    ans.push_back(j);
                    break;
                }
            }
            }
        }
        return ans;
    }
};