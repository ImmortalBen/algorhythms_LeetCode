class Solution {
public:
    int singleNumber(vector<int> nums) {
        int tempNum = 0;
        for (int i = 1; i < nums.size(); i++) {
            tempNum = nums[0] & (tempNum ^ nums[i]);
            nums[0] = tempNum | (nums[0] ^ nums[i]);
        }
        return nums[0];
    }
};