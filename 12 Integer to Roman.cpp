class Solution {
public:
    string intToRoman(int num) {
    	string roman;
    	char unit[10] = "IVXLCDM";
    	int cnt = 0;
    	while (num > 0) {
    		string s;
    		switch (num%10)
    		{
    		case 4:
    			s += unit[cnt];
    			s += unit[cnt + 1];
    			break;
    		case 9:
    			s += unit[cnt];
    			s += unit[cnt + 2];
    			break;
    		default:
    			if (num % 10 >= 5) {
    				s += unit[cnt + 1];
    				num -= 5;
    			}
    			for (int i = 1; i <= num % 10 ; i++) {
    				s += unit[cnt];
    			}
    			break;
    		}
    		s += roman;
    		roman = s;
    		num /= 10;
    		cnt += 2;
    	}
    	return roman;
    }
};