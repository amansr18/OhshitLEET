class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxi=0;
        vector<bool> v(n);
        for(int i=0;i<n;i++){
            if(candies[i]>maxi){
                maxi=candies[i];
            }
        }
        int val = abs(maxi - extraCandies);
        for(int i=0;i<n;i++){
            if(candies[i]>=val){
                v[i]=true;
            }
            else v[i]=false;
        }
        return v;
    }
};