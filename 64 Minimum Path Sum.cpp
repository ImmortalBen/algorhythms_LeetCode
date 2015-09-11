class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if (!grid.size()){
            return 0;
        }
        int m = grid.size(), n = grid[0].size();
        vector<int> sum(n, 0);
        for (int i=0; i<m;i++){
            sum[0] += grid[i][0];
            for (int j=1; j<n; j++){
                if (i==0 || sum[j-1] < sum[j]){
                    sum[j] = sum[j-1];
                }
                sum[j] += grid[i][j]; 
            }
        }
        return sum.back();
    }
};