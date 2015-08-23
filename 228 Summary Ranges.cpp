class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.size()==0){
            return ans;
        }
        int begin = 0;
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i]+1==nums[i+1]){
                continue;
            }
            string range;
            if (begin!=i){
                range += to_string(nums[begin]); 
                range += "->";
            }
            range += to_string(nums[i]);
            ans.push_back(range);
            begin = i + 1;
        }
        string range;
        if (begin != nums.size()-1){
        range += to_string(nums[begin]); 
        range += "->";
        }
         range += to_string(nums[nums.size()-1]);
        ans.push_back(range);
        return ans;
    }
    
};