class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1) return nums;
        if(nums.size() == 2&& nums[0]<0){int temp = nums[0];nums[0] = nums[1]; nums[1]= temp; return nums;} 
        vector<int> posnums;
        vector<int> negnums;
    
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0){
                posnums.push_back(nums[i]);}
            
            else{
                negnums.push_back(nums[i]);}
                }
        int j=0;
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2!=0 && k<negnums.size()){
                 nums[i] = negnums[k];
                 k++;}
            if(i%2==0 && j<posnums.size()){
                nums[i] = posnums[j];
                j++;
                }
        }
    
        return nums;
    }

};