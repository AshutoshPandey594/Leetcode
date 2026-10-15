class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int r=0;
        int col=n-1;
        while(col>=0 && r<m){
            
            if(matrix[r][col]  ==target){
                return true;
            }
            else if(matrix[r][col]> target){
                col--;
            }
            else{
                r++;
            }
    }
        return false;
    }
};