class Solution {
public:
    
    double pow(double x, int n){
        double result;
        if(n==0){
            return 1;
        }
        result = x * pow(x, n-1);
        
        return result;
    }
    
    double myPow(double x, int n) {
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        double ans;
        if(n<0){
             ans= pow(1/x, abs(n));
        }
        else{
             ans = pow(x, n);
        }
        return ans;
    }
};