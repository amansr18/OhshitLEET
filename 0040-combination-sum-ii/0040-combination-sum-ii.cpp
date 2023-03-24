
class Solution {
public:
    
    
    void csum(int ind, vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &ds){
        
        if(target==0){
            ans.push_back(ds);
            return;
        } 
        
        
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(target < arr[i]) break;
            ds.push_back(arr[i]);
            csum(i+1, arr, target-arr[i],ans, ds);
            ds.pop_back();
        }
    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        
        csum(0, candidates, target, ans, ds);
        return ans;
    }
};