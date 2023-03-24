class Solution {
public:
    void csum(int ind, vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &ds){
        if(ind == arr.size()){
            if(target==0) ans.push_back(ds);
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            csum(ind, arr, target-arr[ind], ans, ds);
            ds.pop_back();
        }
        csum(ind+1, arr, target, ans, ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        csum(0, candidates, target, ans, ds);
        return ans;
    }
};