class Solution {
public:
      
      int longestConsecutive(vector<int>&nums){
        if(nums.size()==0) return 0;
         sort(nums.begin(), nums.end());
         int count =1;
         int ans =1;
         for(int i=0; i<nums.size(); i++){
            int mini = nums[i];
            if( i+1<nums.size() && mini+1 ==nums[i+1]){
                count ++;
                mini = nums[i+1];
                ans = max(ans ,count);
            }
            else if(i+1<nums.size() && nums[i] ==nums[i+1]){continue;}
            
            else{count =1;continue;}
         }
         return ans;
}
    
};