class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int x=1;
        int y=1;
        vector<int> vin;

       for(int i=0;i<nums.size();i++){
        vin.push_back(nums[i]);
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]>nums[j-1]){
                vin.push_back(nums[j]);
            }
            else{
                break;
            }
        }
        int z= vin.size();
         x = max(x, z);
        vin.clear();
       }

       vector<int> vdec;
       for(int i=0;i<nums.size();i++){
        vdec.push_back(nums[i]);
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[j-1]){
                vdec.push_back(nums[j]);
            }
            else{
                break;
            }
        }
        int z= vdec.size();
         y=max(y,z);
        vdec.clear();
       }
       return max(x,y);

    }
};