class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum=0;
        int arr[26]={0};
        for(int i=0;i<chars.size();i++){
            arr[chars[i]-'a']+=1;
        }
         for(int i=0;i<words.size();i++){
            string s =words[i];
            int arrword[26]={0};
            for(int j=0;j<s.size();j++){
                arrword[s[j]-'a']+=1;
            }
            bool m = true;
            for(int k=0;k<26;k++){
                if(arrword[k]>arr[k]){
                    m= false;
                    break;
                }
            }
            if(m== true){
                sum+=s.size();
            }
         }
         return sum;
    }
};