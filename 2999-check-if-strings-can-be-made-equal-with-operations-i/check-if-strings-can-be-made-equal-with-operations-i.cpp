class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1==s2){return true;}
           int i=0;
           while(i!=2){
            if(s1[0] == s2[0]){i=1;}
            int j= i+2;
            swap(s1[i],s1[j]);
            if(s1 == s2){return true;}
            i++;
           }
           
           return false;
    }
};