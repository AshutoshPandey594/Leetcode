class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0; i<nums.size(); i++){
            int x =0;
            for(int j=i+1; j<nums.size() && j<=i+k ; j++){
               if(nums[i] == nums[j]){
                   x = abs(i-j);
                   if(x<=k){return true;}
                   else {break;}
               }
               
            }
        }
        return false;
    }
};