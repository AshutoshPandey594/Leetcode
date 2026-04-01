class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int count =0;
        for(int i=0;i<nums.size(); i++){
            if(nums[i] == target){count ++;}
        }
        if(count ==0) return false;
        else{
            return true;
        }
    }
};