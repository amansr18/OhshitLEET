class Solution {
public:
    void recurPermute(vector<int> &nums, int freq[], vector<vector<int>> &ans, vector<int> &ds){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
        }
        
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                
                recurPermute(nums, freq, ans, ds);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;
        recurPermute(nums, freq, ans, ds);
        return ans;
    }
};