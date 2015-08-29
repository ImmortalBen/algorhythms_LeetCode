class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> pathsum = triangle.back();
        for (int i=triangle.size()-2; i>=0; i--){
            for (int j=0; j<=i; j++){
                pathsum[j] = min(pathsum[j], pathsum[j+1]) + triangle[i][j];
            }
        }
        return pathsum[0];
    }
};