class Solution {
public:
    int myAtoi(string str) {
    	long long ans = 0;
    	int i = str.find_first_not_of(' ');
    	bool positive = true;
    	if (str[i] == '+') {
    		positive = true;
    		i++;
    	}
    	else if (str[i] == '-') {
    		positive = false;
    		i++;
    	}
    	while (i < str.size() && ans <= INT_MAX) {
    		if (str[i] >= '0' && str[i] <= '9') {
    			ans *= 10;
    			ans += str[i] - '0';
    		}
    		else {
    			break;
    		}
    		i++;
    	}
    	if (!positive) {
    		return -ans < INT_MIN ? INT_MIN : -ans;
    	}
    	else {
    		return ans > INT_MAX ? INT_MAX : ans;
    	}
    
    }
};