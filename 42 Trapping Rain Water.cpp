class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0;
        int size = height.size();
        int left = 0;
        int right = 0;
        if (!size){
            return 0;
        }
        vector<int> fromLeft(size,0);
        vector<int> fromRight(size,0);
        for (int i=0;i<size;i++){
            left = max(height[i], left);
            right = max(height[size-1-i], right);
            fromLeft[i] = left;
            fromRight[size-1-i] = right;
        }
        for (int i=0;i<size;i++){
            sum -= height[i];
            sum += min(fromLeft[i], fromRight[i]);
        }
        return sum;
    }
};