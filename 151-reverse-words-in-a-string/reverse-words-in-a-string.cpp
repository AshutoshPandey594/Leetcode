class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans ="";
       for(int i=0;i<s.length();i++){
        string word="";
        if(s[i]==' '){
            continue;
        }
        while(i<s.length() && s[i]!=' '){
            word = word+s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        ans+=" "+ word;
       }
       ans.erase(0,1);
       return ans;

    }
};