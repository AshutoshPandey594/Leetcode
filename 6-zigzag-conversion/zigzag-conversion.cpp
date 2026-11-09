class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        int cycle= 2*numRows-2;
         int x=((s.size()+cycle-1)/cycle)*numRows;
        vector<vector<char>>arr(numRows,vector<char>(x,'\0'));
        int k=0;
        
          while(k<s.size()){
        for(int i=0;i<x;i++){
            int flag=0;
            for(int j=0;j<numRows;j++){
                if(i%2==0 && k<s.size()){
                arr[j][i]=s[k];
                k++;
                }
                else{
                    int y=numRows-2;
                    int count=1;
                    while(y>=1 && k<s.size()){
                        arr[y][i]=s[k];
                        y--;
                        k++;
                        flag=1;
                        count++;
                    }
                    if(flag=1){break;}
                }

            }
        }
          }
          string m="";
          for(int i=0;i<numRows;i++){
            for(int j=0;j<x;j++){
                if(arr[i][j]!=0)
                m+=arr[i][j];
            }
          }
      return m;
    }
};