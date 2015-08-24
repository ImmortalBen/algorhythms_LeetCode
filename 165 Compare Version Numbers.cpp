class Solution {
public:
   
int compareVersion(string version1, string version2) {
        int j = 0;
        int i = 0;
        while(i <= version1.size() || j <= version2.size()){
            int val1 = 0;
            int val2 = 0;
            if(i <= version1.size()){
                while(version1[i] != '.' && i < version1.size()){
                    val1 *= 10;
                    val1 += version1[i] - '0';
                    i++;
                }
            }

            if(j <= version2.size()){
                while('.' != version2[j] && j < version2.size()){
                    val2 *= 10;
                    val2 += version2[j] - '0';
                    j++;
                }
            }
            if(val1 > val2) {
                return 1;
            }
            else if(val1 < val2) {
                return -1;
            }
            i++; j++;
        }
        return 0;
    }
};