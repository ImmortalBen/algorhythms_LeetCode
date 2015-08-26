class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int place=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>=target){
                return i;
            }
            place++;
        }
        return place;
    }
};