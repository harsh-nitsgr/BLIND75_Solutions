////shows error on two elememts
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
                  
//         return findMinTemp(nums,0,nums.size()-1);
//     }
    
//     int findMinTemp(vector<int>& nums,int start,int end){
        
//         if(start>=end) return nums[end]; 
//         int mid=start+(end-start)/2;
//         if(nums[mid]>nums[mid+1]) return nums[mid+1];
//         return min(findMinTemp(nums,mid+1,end),findMinTemp(nums,start,mid-1));
      
//     }
// };

class Solution{
  public:
        int findMin(vector<int>& nums){
            if(nums.size()==1)return nums[0];
            int start=0;
            int n=nums.size();
            int end=n-1;
            
            if(nums[end]>nums[0])return nums[0];
            
            while(start<=end){
                int mid=start+(end-start)/2;
                if(nums[mid]>nums[mid+1]) return nums[mid+1];
                if(nums[mid-1]>nums[mid]) return nums[mid];
                if(nums[mid]>nums[0]) start=mid+1;
                else end=mid-1;
            }
            return -1;
        }
};