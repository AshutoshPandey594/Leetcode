class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int nums =1;
        int i=0;
        vector<int>vec;
        while(i<arr.size()){
                if(arr[i]!=nums){
                    vec.push_back(nums);
                    nums+=1;
                }else{
                    i+=1;
                    nums+=1;
                }
                if(!vec.empty()){if(vec.size()==k) return vec[k-1];}
        }
        vec.push_back(arr[i-1]+1);
        while(vec.size()<k){
            int n = vec.size();
               vec.push_back(vec[n-1]+1);
        }
                
        return vec[k-1];
    }
};