class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int max = nums[0];
        for (int i = 0; i < nums.size(); i++){
            if (!count){
                max = nums[i];
            }
            if (max != nums[i]){
                count--;
            }
            else{
                count++;
            }
        }
        return max;
    }
};