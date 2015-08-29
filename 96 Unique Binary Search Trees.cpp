class Solution {
public:
    int numTrees(int n) {
    	if (n <= 1) {
    		return 1;
    	}
    	vector<int> treenum(n + 1, 0);
    	treenum[0]=1;
    	for (int i = 1; i <= n; i++) {
    		int curnum = 0;
    		for (int j = 0; j < i; j++) {
    			curnum += treenum[j] * treenum[i - j - 1];
    		}
    		treenum[i]=curnum;
    	}
    	return treenum.back();
    }
};