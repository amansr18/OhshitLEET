class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> m;
        
        stack<int> s;
        
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums2[i]){
                s.pop();
            }
            if (!s.empty()) m[nums2[i]] = s.top();
            if(s.empty()){
                m[nums2[i]]=-1;
            }
            s.push(nums2[i]);
            
        }
        for (int i = 0; i < nums1.size(); i++)
            nums1[i] = m[nums1[i]];
        
        return nums1;
    }
};