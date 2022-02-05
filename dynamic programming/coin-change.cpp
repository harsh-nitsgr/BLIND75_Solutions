class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int *dp=new int[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            int amt=INT_MAX;
            for(auto &coin:coins){
                if(i-coin>=0 && dp[i-coin]!=INT_MAX) amt=min(amt,(1+dp[i-coin]));
            }
            dp[i]=amt;
        }
        return dp[amount]>amount? -1:dp[amount];
    }
};