class Solution {
public:
    int maxSubArray(vector<int>& nums) {
//         int max_sum = nums[0];
//         int cur_sum = max_sum;
        
//         for(int i=1;i<nums.size();i++){
//             cur_sum =  max(cur_sum + nums[i], nums[i]);
//             max_sum = max(cur_sum,max_sum);
//         }
//         return max_sum;
//     }
        int max_sum =nums[0];
        int cur_sum = max_sum;
        for(int i=1;i<nums.size();i++){
            cur_sum += nums[i];
            // max_sum = max(cur_sum,max_sum);
            if(max_sum < cur_sum && cur_sum >= nums[i]){
                // if(max_sum > nums[i] )
                max_sum = cur_sum;
            }
            else if(max_sum < nums[i] && nums[i] >= cur_sum)
                max_sum = nums[i];
            
            if(cur_sum<0)
                cur_sum =max(cur_sum,nums[i]);
            else 
                cur_sum = max(cur_sum,nums[i]);
        }
        return max_sum;
    }
};