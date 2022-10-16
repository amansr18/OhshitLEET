class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n),b(n);
        a[0]=nums[0],b[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            a[i]=nums[i]+a[i-1];
        }
        for(int j=n-2;j>=0;j--){
            b[j]=nums[j]+b[j+1];
        }
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                return i;
            }
        }
        return -1;
    }
};