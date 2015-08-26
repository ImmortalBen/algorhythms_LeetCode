class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max = 0;
        while (left<right){
            int area = right - left;
            if (height[left] < height[right]){
                area *= height[left++];
            }
            else{
                area *= height[right--];
            }
            max = area > max ? area : max;
            
        }
        return max;
    }
};