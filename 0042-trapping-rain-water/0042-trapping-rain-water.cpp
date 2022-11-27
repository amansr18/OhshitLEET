class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> pref_max(n),suf_max(n);
        int maxi=0;
        for(int i=0;i<n;i++){
           pref_max[i]=max(maxi, height[i]);
           maxi = pref_max[i];
        }
        maxi=0;
        for(int i=n-1;i>=0;i--){
            suf_max[i]=max(maxi,height[i]);
            maxi = suf_max[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans += min(pref_max[i], suf_max[i]) - height[i];
        }
        cout<<suf_max[n-1];
        return ans;
    }
};