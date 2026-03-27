class Solution {
public:
vector<string> validStrings(int n) {
        vector<string>ans;
        help(n,ans);
        return ans;
        
        
}
  void help(int n, vector<string>&ans, string val="",int lastPlace =-1){
    if(n==0){
        ans.push_back(val);
        return;
        
    }
    if(lastPlace!=0){
        help(n-1,ans,val+'1',1);
        help(n-1,ans,val+'0',0);
    }
    else{
        help(n-1,ans,val+'1',1);
    }

    
  }
};