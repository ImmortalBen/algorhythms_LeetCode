class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size()==0){
            return 0;
        }
        int cnt=0, flag=0;
        for (int i=0;i<s.size();i++){
            if (s[i]==' '){
                flag=1;
            }
            else {
                if (flag){
                    cnt=1;
                    flag=0;
                }
                else{
                    cnt++;
                }
            }
        }
        return cnt;
    }
};