class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size()==1){
            return true;
        }
        int reach = 0;
        while(reach + nums[reach] < nums.size()-1){
            int max = 0;
            for (int i=1; i<=nums[reach] && (reach+i)<nums.size(); i++){
                if (nums[reach+i]+i>nums[reach+max]+max){
                    max = i;
                }
            }
            if (!max){
                return false;
            }
            reach += max;
        }
        return true;
    }
    
};