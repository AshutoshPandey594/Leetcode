class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){count++;}
        }
        if(count==nums.size()-1){reverse(nums.begin(),nums.end());return;}
        int n= nums.size();
       
        int pivot;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
               for(int k=n-1;k>pivot;k-- ){
                if(nums[k]>nums[pivot]){
                swap(nums[pivot],nums[k]);
                break;
                }
               }
                reverse(nums.begin()+pivot+1,nums.end());
                break;
            }
        }

    }
};