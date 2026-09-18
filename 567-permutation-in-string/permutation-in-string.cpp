class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int freq[26]={0};
        int i=0;
        while(i<s1.length()){
            freq[s1[i]-'a']+=1;
            i++;
        }
        
        string window;
        for(int i=0;i<s2.length();i++){
            int count=0;
             int freqwindow[26]={0};
            window=s2.substr(i,s1.length());
            int j=0;
            while(j<window.length()){
                freqwindow[window[j]-'a']+=1;
                j++;
            }
            for(int i=0;i<26;i++){
                if(freq[i]==freqwindow[i]){
                    count ++;
                }
                
            }
            if(count==26){return true;}
        
        }
        return false;
    }
};