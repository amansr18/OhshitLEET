https://leetcode.com/problems/n-th-tribonacci-number/


int tribonacci(int n) {
        int dp[3]={0,1,1};
    
    //After given numbers calculate next Tribonacci number
    //Save it at i%3th place
    for(auto i=3;i<=n;i++)
        dp[i%3]=dp[0]+dp[1]+dp[2];
    
    return dp[n%3];
    }
