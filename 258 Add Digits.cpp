class Solution {
public:
    int addDigits(int num) {
        if (!num){
            return 0;
        }
        return num%9?num%9:9;
    }
};