class Solution {
public:
    int hammingWeight(int n) {
        vector<int> vec;
        while(n>0){
            vec.push_back(n%2);
            n = n/2;
            
        }
        int st=0;
        int end = vec.size()-1;
        while(st<= end){
            swap(vec[st], vec[end]);
            st++;
            end--;
        }

        int count=0;
        for(int i=0; i<vec.size(); i++){
            if(vec[i] == 1){
                count = count +1;
            }
        }
        
        return count;
    }
};