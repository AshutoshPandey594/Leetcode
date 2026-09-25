class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
         mp['I'] = 1;
         mp['V'] = 5;
         mp['X'] = 10;
         mp['L'] = 50;
         mp['C'] = 100;
         mp['D'] = 500;
         mp['M'] = 1000;
         int i = s.length()-2;
         int sum = mp[s[s.length()-1]];
         while(i>=0){
             if(mp[s[i]]<mp[s[i+1]]){
             sum-=mp[s[i]];
         }
         else{
            sum +=mp[s[i]];
            
         }
         i--;
         }
       return sum;
            }
};