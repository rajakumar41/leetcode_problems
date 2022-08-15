class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int cur_sum = max_sum;
        
        for(int i=1;i<nums.size();i++){
            cur_sum =  max(cur_sum + nums[i], nums[i]);
            max_sum = max(cur_sum,max_sum);
        }
        return max_sum;
    }
};