class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        while(i<s.length() && s[i] ==' '){
            s.erase(i,1);
            
        }
        int j= s.length()-1;
        while(j>=0 && s[j] ==' '){
            s.erase(j,1);
            j--;
        }
        for(int i=0;i<s.length();i++){
            int flag =0;
            if(s[i]==' ' && flag ==0){
                flag =1;
                i++;
            }
           while(i<s.length() && s[i] == ' '){
            s.erase(i,1);
           }
           
        }
        reverse(s.begin(),s.end());
        
        int K=0;
        for(int i=0;i<s.length();i++){
           int start=0;
            if(s[i] != ' '){
                continue;
            }
          start = i-1;
          while(start>=K){
            swap(s[K],s[start]);
            start--;
            K++;
          }
          K=i+1;


        }
        reverse(s.begin()+K,s.end());
        return s;

    }
};