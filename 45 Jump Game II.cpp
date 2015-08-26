class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size()==1){
            return 0;
        }
        int count = 1;
        int reach = 0;
        while(reach + nums[reach] < nums.size()-1){
            int max = 0;
            for (int i=1; i<=nums[reach] && (reach+i)<nums.size(); i++){
                if (nums[reach+i]+i>nums[reach+max]+max){
                    max = i;
                }
            }
            reach += max;
            count++;
        }
        return count;
    }
};