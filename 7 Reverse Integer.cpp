class Solution {
public:
    int reverse(int x) {
        if (x==INT_MIN){
            return 0;
        }
        if (x<0){
            return -reverse(-x);
        }
        int sum = 0;
        while(x){
            if (sum > INT_MAX / 10 || 10 * sum > INT_MAX - x % 10) {
                return 0;
            }
            sum *= 10;
            sum += x%10;
            x /= 10;
        }
        return sum;
    }
};