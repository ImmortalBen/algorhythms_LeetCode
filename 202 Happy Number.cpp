class Solution {
public:
    bool isHappy(int n) {
        while(1){
            if (n==1){
                return true;
            }
            else if (n==4){
                return false;
            }
            int sum = 0;
            while(n){
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = sum;
        }
    }
};