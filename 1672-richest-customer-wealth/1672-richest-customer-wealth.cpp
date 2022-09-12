class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            vector val = accounts[i];
            for(int j=0;j<val.size();j++){
                sum+=val[j];
                if(sum>temp) temp = sum;
            }
        }
        return temp;
    }
};