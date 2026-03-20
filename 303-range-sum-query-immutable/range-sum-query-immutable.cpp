class NumArray {
public:
     vector<int> arr;
    NumArray(vector<int>& nums) {
        arr = nums;
    }
    
    int sumRange(int left, int right ) {
    
        int sum =0;
        if(left<0 || right>= arr.size()) return {} ;
        else{
            while(left<=right){
                sum = sum+ arr[left];
                left++;
            }
        }
        return sum;
    }
    

};


/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */