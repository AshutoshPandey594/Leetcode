class Solution {
public:
    int calculateScore(int a, int b) {
        int suma=0;
        int sumb=0;
        while(a>0 ){
            suma+=a%2;
            a=a/2;
        }
        while(b>0){
            sumb+=b%2;
            b=b/2;
        }
        if(suma>=sumb){
            return (suma*sumb);
        }
        return (sumb/suma);
    }
};