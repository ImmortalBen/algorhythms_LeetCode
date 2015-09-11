class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if (!nums.size()){
            return nums;
        }
        vector<int> output(nums.size(), 1);
        for (int i=1; i<nums.size(); i++){
            output[i] = output[i-1] * nums[i-1];
        }
        int product = 1;
        for (int i=nums.size()-1; i>0; i--){
            product *= nums[i];
            output[i-1] *= product;
        }
        return output;
    }
};

