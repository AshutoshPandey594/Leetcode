class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i= m; i<m+n; i++){
            if(j!=n){
                nums1[i]=nums2[j];
                j++;
            }
            else{
                break;
            }
        }
      //  for(int i=0; i<m+n; i++){
        //    if(m+n == 1) break;
          //  if(nums1[i]< nums1[i+1] && (i+1)<m+n){
            //    continue;
            //}
            //else{
              //  swap(nums1[i], nums1[i+1]);
            //}
        //}
        sort(nums1.begin(), nums1.end());
    }
};