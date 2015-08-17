class Solution {
public:
   bool isAnagram(string s, string t) {
    	if (s.size() != t.size()) {
    		return false;
    	}
    	int s_alphabet[26], t_alphabet[26];
    	memset(s_alphabet, 0, sizeof(s_alphabet));
    	memset(t_alphabet, 0, sizeof(t_alphabet));
    	for (int i = 0; i < s.size(); i++) {
    		s_alphabet[s[i] - 'a']++;
    		t_alphabet[t[i] - 'a']++;
    	}	
    	return memcmp(s_alphabet, t_alphabet, sizeof(s_alphabet))==0;
    }
};