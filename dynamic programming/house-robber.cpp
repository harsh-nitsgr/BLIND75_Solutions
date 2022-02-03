class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n+2,0);
        
        int Max=INT_MIN;
        int Maxdp=INT_MIN;
        for(int i=n-1;i>=0;i--){
            Max=max(dp[i+2],Max);
            dp[i]= nums[i]+Max;
            Maxdp=max(Maxdp,dp[i]);
        }
        return Maxdp;
    }
};