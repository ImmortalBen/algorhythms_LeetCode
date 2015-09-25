class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        if (!size){
            return 0;
        }
        int num = size;
        for (int i=0;i<nums.size();i++){
            num = num ^ i;
            num = num ^ nums[i];
        }
        return num;
    }
};