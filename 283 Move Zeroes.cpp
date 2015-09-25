class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int place = 0;
        for (int i=0; i<size; i++){
            if (nums[i] != 0){
                if (i != place){
                    swap(nums[place], nums[i]);
                }
                place++;
            }
        }
    }
};