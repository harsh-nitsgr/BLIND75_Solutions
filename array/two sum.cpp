class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,0);
    int n=nums.size();

    unordered_map<int,int>map;

    for(int i=0;i<n;i++){
        if(map.find(nums[i]) != map.end()){
            ans[0]=(map[nums[i]]);
            ans[1]=i;
            break;
        }
        map[target-nums[i]]=i;
    }
    return ans;
    }
};