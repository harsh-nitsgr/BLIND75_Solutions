class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0]; 
        int ans=INT_MIN;
        for(int i=1;i<n;i++){
            ans=max(ans,nums[i]-prev); 
            prev=min(prev,nums[i]);
        }
        return (ans < 0) ? 0:ans;
        
    }
};