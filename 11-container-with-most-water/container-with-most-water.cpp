class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp =0 ;
        int rp =height.size()-1;
        int maxwater = 0;
        while(lp<rp){
            int w = rp - lp;
            int ht = min(height[rp] , height[lp]);
            int currwater = w*ht;
             maxwater = max(maxwater , currwater);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxwater;   
    }
};