class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (!nums.size()){
            return 0;
        }
        int count = 0;
        for (int i=1; i<nums.size(); i++){
            if (nums[i] != nums[count]){
                nums[++count] = nums[i];
            }
        }
        nums.resize(count+1);
        return count+1;
    }
};