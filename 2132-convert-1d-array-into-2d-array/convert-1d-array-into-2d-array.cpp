class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n<original.size() || m*n> original.size()) return {};
        vector<vector<int>>nums(m , vector<int>(n));
        int i=0;
        for(int j=0; j<m; j++){
          int  k=0;
            while(k<n){
                nums[j][k]=original[i];
                k++;
                i++;
            }
        }
        return nums;
    }
};