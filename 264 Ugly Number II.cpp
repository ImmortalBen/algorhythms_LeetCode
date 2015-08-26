class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> nums;
        int count2 = 0;
        int count3 = 0;
        int count5 = 0;
        int cur = 1;
        while (--n){
            nums.push_back(cur);
            int next2 = 2 * nums[count2];
            int next3 = 3 * nums[count3];
            int next5 = 5 * nums[count5];
            cur = min(next2, min(next3, next5));
            if (cur == next2){
                count2++;
            }
            if (cur == next3){
                count3++;
            }
            if (cur == next5){
                count5++;
            }
        }
        return cur;
    }
};