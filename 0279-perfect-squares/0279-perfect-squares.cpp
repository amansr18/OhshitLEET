class Solution {
public:
    int numSquares(int n) {
         vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int nums=1;nums<=n;++nums){
            int Cnt = INT_MAX;
            for (int num = 1; num <= sqrt(nums); num++)
            {
                int curCnt = 1 + dp[nums - (num*num)];
                Cnt = min(Cnt, curCnt);
            }
            dp[nums] = Cnt;
        }
        return dp[n];
    }
};