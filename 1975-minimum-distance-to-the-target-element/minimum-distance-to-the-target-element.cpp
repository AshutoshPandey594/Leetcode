class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int x;
        int minimum = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                x =abs((i - start)) ;
             minimum = min(minimum,x);
                
                
            }
        }
        return minimum;
    }
};