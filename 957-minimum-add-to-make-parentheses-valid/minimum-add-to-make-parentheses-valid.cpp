class Solution {
public:
    int minAddToMakeValid(string s) {
        int k=0;
        int s1=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                k++;
            }
            else{
                k--;
            }
            if(k<0){
                s1++;
                k=0;
            }
        }
        return (s1+k);
    }
};