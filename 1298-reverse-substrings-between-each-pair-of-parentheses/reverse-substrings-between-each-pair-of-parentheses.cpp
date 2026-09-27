class Solution {
public:
     string fun1(string s1){
          int r=0;
        for(int i=0;i<s1.length();i++){

            if(s1[i]!='(' ){
                r++;
                continue;
            }
        }
        if(r==s1.length()){return s1;}
         
          int j=0;
        for(int k=0;k<s1.length();k++){
            if(s1[k]!='('){
                j++;
            
            }
            else {
                break;
            }
            
        }

        while(s1[j]=='('){

            int count=0;

            for(int i=0;i<s1.length();i++){

                if(s1[i]!=')'){continue;}

                if(s1[i]==')'){
                    int index=i-1;

                  while(s1[i]!='('){
                    i--;
                  }

                  reverse(s1.begin()+i+1,s1.begin()+index+1);

                  s1.erase(i,1);

                  s1.erase(index,1);

                  break;
                }
                
            }
            
        }
      return fun1(s1);
     }
    string reverseParentheses(string s) {
        int j=0;
        for(int k=0;k<s.length();k++){
            if(s[k]!='('){
                j++;
            
            }
            else {
                break;
            }
            
        }

        while(s[j]=='('){

            int count=0;

            for(int i=0;i<s.length();i++){

                if(s[i]!=')'){continue;}

                if(s[i]==')'){
                    int index=i-1;

                  while(s[i]!='('){
                    i--;
                  }

                  reverse(s.begin()+i+1,s.begin()+index+1);

                  s.erase(i,1);

                  s.erase(index,1);

                  break;
                }
                
            }
        }
        string s1=s;
        for(int i=0;i<s.length();i++){
            if(s[i]!='('){continue;}
            else{ s= fun1(s1);}
        }
       
       return s;
    }
};