class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //kadane's algorithm
        int Max=nums[0];
        int currMax=0;
            
        for(int i=0;i<nums.size();i++){
            currMax+= nums[i];
            if(currMax>Max) Max=currMax;
            if(currMax<0) currMax=0;
        }
        return Max;
    }
};