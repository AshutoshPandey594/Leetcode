class Solution {
public:
    int removeElement(vector<int>& nums, int val){
        int k=0;
        if(nums.size() ==0) return k;
        if(nums.size() ==1 && nums[0] == val) return k;
            vector<int> newNums;
        int i=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == val){continue;}
            else{newNums.push_back(nums[i]);}
        }
        nums.clear();
        for(int i=0;i<newNums.size(); i++){nums.push_back(newNums[i]); k+=1;}
        return k;
    }
};