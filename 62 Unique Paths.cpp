class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> row(n, 1);
        vector<vector<int>> map(m, row);
        if (m == 1 || n == 1){
            return 1;
        }
        for (int i = 1; i < m; i++){
            for (int j = 1; j < n; j++){
                map[i][j] = map[i - 1][j] + map[i][j - 1];
            }
        }
        return map.back().back();
    }
};