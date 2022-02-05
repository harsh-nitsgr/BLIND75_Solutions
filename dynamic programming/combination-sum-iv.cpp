class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        unsigned int* dp= new unsigned int[target+1];
        dp[0]=1;
        
        for(int i=1;i<=target;i++){
            dp[i]=0;
            for(auto &num:nums) if(i-num>=0) dp[i]+=dp[i-num];
        }
        return dp[target];
    }
};