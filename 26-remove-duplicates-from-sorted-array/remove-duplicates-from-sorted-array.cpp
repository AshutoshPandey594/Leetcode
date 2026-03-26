class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        if(nums.size() == 0) return k;
        if(nums.size() ==1) return k+=1;
       int i=0;
       int j=1;
       vector<int> newNums;
       newNums.push_back(nums[0]);
       while(j<nums.size()){
       if(nums[i] == nums[j]){
        j++;
       }
       else{
        newNums.push_back(nums[j]);
        j++;
        i=j-1;
       }
       }
       nums.clear();
       for(int i=0; i<newNums.size();i++){
          nums.push_back(newNums[i]);
          k+=1;
       }    
       return k;      
    }
};