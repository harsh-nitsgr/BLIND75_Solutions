class Solution {
    public:      
        vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> vRes(nums.size(), 1);
            int prefixProd = 1;
            for (int i = 0; i < nums.size(); i++) {
                vRes[i] = prefixProd;
                prefixProd *= nums[i];
            }
            int suffixProd = 1;
            for (int i = nums.size() - 1; i >= 0; i--) {
                vRes[i] *= suffixProd;
                suffixProd *= nums[i];
            }
            return vRes;
        }
};
