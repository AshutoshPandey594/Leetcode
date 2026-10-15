class Solution {
public:

    bool searchInrow(vector<vector<int>>&matrix,int midR,int m,int n,int target){
      int st1=0;
                int end1= n-1;
                while(st1<=end1){
                    int mid1= st1+(end1-st1)/2;
                    if(matrix[midR][mid1] == target){
                        return true;
                    }
                    else if(matrix[midR][mid1]<target){
                        st1=mid1+1;
                    }
                    else{
                        end1= mid1-1;
                    }
                }
                return false;
  }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m= matrix.size();
          int n= matrix[0].size();
        int st=0;
        int end= m-1;
        while(st<=end){
            int midR= st+(end-st)/2;
            if(target>=matrix[midR][0] && target<=matrix[midR][n-1]){
               return  searchInrow(matrix,midR,m,n,target);
            }
            else if(target>=matrix[midR][n-1]){
                st=midR+1;
            }
            else{
                end=midR-1;
            }
        }
        return false;
        
    }
};