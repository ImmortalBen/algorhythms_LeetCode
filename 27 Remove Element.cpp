class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        vector<int> after;
        for (int i=0; i<size; i++){
            if (nums[i] != val){
                after.push_back(nums[i]);
            }
        }
        nums = after;
        return nums.size();
    }
};