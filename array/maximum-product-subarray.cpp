class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int s=1,e=1;
        int ans=nums[0];
        
        for(int i=0;i<n;i++){
            s=s*nums[i];
            e=e*nums[n-i-1];
            ans=max(ans,max(s,e));
            
            if(s==0)s=1;
            if(e==0)e=1;
        }
        return ans;
        
    }
};
