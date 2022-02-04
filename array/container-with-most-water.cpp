class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        
        int Max=-1;
        while(left<right){
            Max=max(Max,(right-left)*min(height[left],height[right])); 
            height[left]<height[right]? left++:right--;
        }
        return Max;
    }
};
