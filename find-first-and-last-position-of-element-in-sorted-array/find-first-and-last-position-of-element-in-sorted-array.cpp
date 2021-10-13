class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    
        int s =0;
        int e = nums.size()-1;
        
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] == target){
              int first_idx=mid;
                int last_idx=mid;
                while(first_idx-1>=0 && nums[first_idx-1]==nums[mid]){
                    first_idx--;
                }
                while(last_idx+1<nums.size() && nums[last_idx+1]==nums[mid]){
                    last_idx++;
                }
                return {first_idx,last_idx};  
            }
            
            if(nums[mid] < target)
                s = mid+1;
            else
                e = mid-1;
        }
        
        return {-1,-1};
    }
    
};