class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int> (n,0));
        
        int val=1;
        int r1=0, c1=0, r2=n-1, c2=n-1;
        
        for (int i = 0; i < n / 2; ++i) {
            for(int i=c1; i<=c2; i++){
                matrix[r1][i]=val++;
            }
            for(int i=r1+1; i<=r2; i++){
                matrix[i][c2]=val++;
            }
            for(int i=c2-1; i>=c1; i--){
                matrix[r2][i]=val++;
            }
            for(int i=r2-1; i>r1; i--){
                matrix[i][c1]=val++;
            }
            r1++;c1++;r2--;c2--;
        }
        
        if (n & 1)
            matrix[n / 2][n / 2] = val;
        return matrix;
    }
};