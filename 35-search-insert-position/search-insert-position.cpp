class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st =0;
        int end = nums.size()-1;
        int mid;
        while(st<=end){
            int mid = st +(end-st)/2;
            if(nums[mid] == target){return mid;}
            else if(nums[mid]< target){
                if (mid == nums.size()-1){return mid+1;}
                if (nums[mid+1] > target){
                    return mid+1;
                }
                st = mid+1;
            }
            else if (nums[mid] > target){
                if(mid ==0){
                    return 0;
                }
                if(nums[mid -1]< target){
                    return mid;
                }
                end = mid-1;
            }
        }
        return mid;
    }
};