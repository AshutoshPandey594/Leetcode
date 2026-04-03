class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        if(strs.size() == 1 && strs[0] == "") return "";
        if(strs.size() == 1) return strs[0];
       string ans =strs[0];
         string temp = "";
       for(int i=1; i<strs.size(); i++){
            temp.clear();
            for(int j=0; j<min(strs[i].length(),strs[i-1].length()); j++){
                if(strs[i][j] == ans[j]){temp+=strs[i][j]; }
                else{break;}
            }
            ans = temp;
       }
       if(ans.length() == 0){return "";}
         return ans;
    }
};