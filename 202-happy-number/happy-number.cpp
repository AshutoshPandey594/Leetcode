class Solution {
public:
    bool isHappy(int n) {
        if(n==1){return true;}
        unordered_set<int>seen;
        while(n>1){
            if(seen.count(n)){return false;}
            seen.insert(n);
         int sum =0;
        while(n>0){
            int x = n%10;
            n = n/10;
             sum +=x*x;
        }
        n= sum;
        if(n==1){return true;}
        }
        return false;
    }
};