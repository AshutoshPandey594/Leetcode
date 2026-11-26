class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int x=10;
        int cnt=0;
        while(n>=x){
            if(n>=x){
                n=n-x;
                x--;
                cnt++;
            }
        }
        if(cnt%2!=0) return true;
        return false;
    }
};