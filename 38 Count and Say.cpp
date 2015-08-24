class Solution {
public:
    string countAndSay(int n) {
        string seq = "1";
    	for (int i = 1; i<n; i++) {
    		int count = 0;
    		int curnum = 0;
    		string curstr;
    		for (int j = 0; j<seq.size(); j++) {
    			if (curnum != seq[j] - '0') {
    				if (curnum != 0) {
    					curstr += to_string(count);
    					curstr += to_string(curnum);
    				}
    				count = 1;
    				curnum = seq[j] - '0';
    				continue;
    			}
    			count++;
    		}
    		curstr += to_string(count);
    		curstr += to_string(curnum);
    		seq = curstr;
    	}
    	return seq;
    }
};