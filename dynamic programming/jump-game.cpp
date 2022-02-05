///not efficient but correct
// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
        
//         int n=nums.size();
//         vector<bool>dp(n,0);
//         dp[n-1]=1;
        
//         for(int i=n-2;i>=0;i--){
//             for(int j=i+1;j<=i+nums[i] && j<n;j++){
//                 if(dp[j]==1){
//                     dp[i]=1;
//                     break;
//                 }
//             }
//         }
//         return dp[0];      
//     }
// };

class Solution {
    public:
        Solution(){
            ios_base::sync_with_stdio(false);
            cin.tie(0);
            cout.tie(0);        
        }
    
        bool canJump(vector<int>& nums){
            int goal=nums.size()-1;
            for(int i=nums.size()-2;i>=0;i--){
                if(nums[i]+i>=goal) goal=i;
            }
            return goal==0;
        }
};