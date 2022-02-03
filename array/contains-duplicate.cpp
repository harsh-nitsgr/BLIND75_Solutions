class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return 1;
            }
        }
        return 0;

        ////using hash_set
        // unordered_set<int>list;
        // for(int i=0;i<nums.size();i++){
        //     list.insert(nums[i]);
        // }
        // return !(list.size()==nums.size());
    }
};