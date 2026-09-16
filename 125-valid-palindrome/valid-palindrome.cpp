class Solution {
public:
    bool isPalindrome(string s) {
        if(s=="" || s==" "){return true;}
        
        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&& s[i]<='Z' || s[i]>='a'&& s[i]<='z' || s[i]>='0' && s[i]<='9'){
                continue;
            }
            else{
                s.erase(i,1);
                i--;
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=tolower(s[i]);
            }
        }
        string x = s;

        
        reverse(s.begin(),s.end());
        if(s==x){return true;}
        else{return false;}

    }
};