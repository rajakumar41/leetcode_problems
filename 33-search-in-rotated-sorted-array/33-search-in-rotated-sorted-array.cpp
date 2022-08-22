class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res = -1;
        int i =0, j = nums.size()-1;
        while(i <= j){
            int mid = (i+j)/2;
            
            if(nums[mid] == target){
                res = mid;
            }
            if(nums[mid] >= nums[i]){
                if(nums[i] <= target && target <= nums[mid])
                    j= mid-1;
                else
                    i = mid+1;
            }
            else{
                if(target >=nums[mid] && target <= nums[j])
                    i = mid+1;
                else
                    j = mid-1;
            }
        }
        
        return res;
    }
};