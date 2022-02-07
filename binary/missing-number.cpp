class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
    // using bit-manipulation
        
    //      int n=nums.size(),a=0;     
    //      for(int i=0;i<n;i++){
    //          a=a^i^nums[i];
    //      }
    //      return a^n;
        
    // using sorting
        
    //      sort(nums.begin(),nums.end());
    //      int n=nums.size();       
    //      if(nums[0]!=0) return 0;
            
    //      for(int i=0;i<n-1;i++){
    //          if(nums[i+1]-nums[i]!=1) return (nums[i]+1);
    //      }
    //      return (nums[n-1]+1);
        
    //third approach
        
        int sum=0,n=nums.size();
        for(int num:nums){
            sum+=num;
        }
        return (n*(n+1)/2)-sum; 
    }
};
