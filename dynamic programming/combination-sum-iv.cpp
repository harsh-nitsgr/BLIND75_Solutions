class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        uint32_t* dp= new uint32_t[target+1];
        dp[0]=1;
        
        for(int i=1;i<=target;i++){
            dp[i]=0;
            for(auto &num:nums) if(i-num>=0) dp[i]+=dp[i-num];
        }
        return dp[target];
    }
};
