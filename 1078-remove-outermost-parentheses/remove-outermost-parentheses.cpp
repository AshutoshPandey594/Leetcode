class Solution {
public:
    string removeOuterParentheses(string s) {
        string y;
        string x="";
        int k=0;
        int m=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                k++;
            }
            else{
                k--;
            }
             if(k==0){
                s.erase(m,1);
                s.erase(i-1,1);
                i=i-2;
                m=i+1;
             }
        }
        return s;
    }
};