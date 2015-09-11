class Solution {
public:

	int totalNQueens(int n) {
		vector<int> solution;
		return NQueensLevel(n, solution, 0);
	}

	int NQueensLevel(int n, vector<int> &sol, int level) {
		if (level == n) {
			return 1;
		}
		int num = 0;
		for (int i = 0; i<n; i++) {
			if (checkSolution(sol, i)) {
				sol.push_back(i);
				num += NQueensLevel(n, sol, level + 1);
				sol.pop_back();
			}
		}
		return num;
	}

	bool checkSolution(vector<int> &sol, int pos) {
		for (int i = 0; i<sol.size(); i++) {
			if (sol[i] == pos) {
				return false;
			}
			if (abs(sol.size() - i) == abs(sol[i] - pos)) {
				return false;
			}
		}
		return true;
	}
};