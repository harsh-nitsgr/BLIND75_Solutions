class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int dp[m][n];
        
        for(int i=0,j=n-1; i<m; i++) dp[i][j]=1;
        for(int i=m-1,j=0; j<n; j++) dp[i][j]=1;
        
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};