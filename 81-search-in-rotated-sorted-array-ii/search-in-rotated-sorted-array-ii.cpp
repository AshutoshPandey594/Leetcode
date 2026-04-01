class Solution {
public:
  bool rotatedSort(vector<int>&nums,int target,int si,int ei){
    if(si>ei) return false;
        int mid = si +(ei - si)/2;
                if(nums[mid] == target){ return true ;}
                if(nums[si] == nums[mid] && nums[mid] == nums[ei]) {
    return rotatedSort(nums, target, si + 1, ei - 1);
}
                if(nums[si]<= nums[mid]){// first line
                       if(target>=nums[si] && target<nums[mid]){
                      return rotatedSort(nums, target,si,mid-1);
                       }
                       else{
                        return rotatedSort(nums, target,mid+1,ei);
                       }
                }
                else{ // 2nd line
                   if(target> nums[mid] && target<=nums[ei]){
                   return  rotatedSort(nums,target,mid+1,ei);
                   }
                   else{
                   return rotatedSort(nums,target,si,mid-1);
                   }
                }
           }
    bool search(vector<int>& nums, int target) {
        // Modified binary search
         int si =0;
         int ei = nums.size()-1;
        return rotatedSort(nums,target,si,ei);
    }
};