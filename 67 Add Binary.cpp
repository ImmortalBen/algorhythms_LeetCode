class Solution {
public:
    string addBinary(string a, string b) {
    	int jw = 0, apos = a.size() - 1, bpos = b.size() - 1, size = a.size()>b.size() ? a.size() : b.size();
    	string ans(size + 1, '0');
    	for (int i = size; i>=0; i--, apos--, bpos--) {
    		int va, vb;
    		if (apos < 0) {
    			va = 0;
    		}
    		else {
    			va = a[apos] -= '0';
    		}
    		if (bpos < 0) {
    			vb = 0;
    		}
    		else {
    			vb = b[bpos] -= '0';
    		}
    		ans[i] = va ^ vb ^ jw + '0';
    		if ((va + vb + jw)>1) {
    			jw = 1;
    		}
    		else {
    			jw = 0;
    		}
    	}
    	if (ans[0]=='0') {
    		ans = ans.substr(1, size);
    	}
        return ans;
    }
};