class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        if(digits[n] !=9){
            int x = digits[n];
            digits.pop_back();
            digits.push_back(x+1);
            return digits;
        }
        int i =n;
        int count =0;
        while(i>=0){
            if(digits[i] == 9){
                digits[i] =0;
                i--;
                     count ++;
                if(count ==n+1){
                  digits[0] =1;
                  digits.push_back(0);
                  return digits;
            }
            }
           else{
            int r = digits[i];
            digits[i] = digits[i] +1;
            break;
           }
        }
        return digits;
    }
};