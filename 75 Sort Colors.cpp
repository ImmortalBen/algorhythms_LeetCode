class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cur = 0;
        int red = 0;
        int blue = nums.size()-1;
        while (cur <= blue){
            if (nums[cur] == 0){
                if (cur == red){
                    cur++;
                    red++;
                    continue;
                }
                nums[cur] = nums[red];
                nums[red] = 0;
                red++;
            }
            else if (nums[cur] == 2){
                nums[cur] = nums[blue];
                nums[blue] = 2;
                blue--;
            }
            else {
                cur++;
            }
        }
        return;
    }
};