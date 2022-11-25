class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans(nums1.size()),nge(nums2.size());
        stack<int> s;
        
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums2[i]){
                s.pop();
            }
            if (!s.empty()) nge[i] = s.top();
            if(s.empty()){
                nge[i]=-1;
            }
            s.push(nums2[i]);
            
        }
       
        for(int i=0;i<nums1.size();i++){
           for(int j=0;j<nums2.size();j++){
               if(nums2[j]==nums1[i]){
                   ans[i]=nge[j];
               }
           }
        }
        
        return ans;
    }
};