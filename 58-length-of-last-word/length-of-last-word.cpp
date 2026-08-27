class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
       int flag =0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && flag==0){continue;}
            flag=1;
            if(s[i]!=' '){count++;}
            else{break;}
        }
        
    return count;
    }
};