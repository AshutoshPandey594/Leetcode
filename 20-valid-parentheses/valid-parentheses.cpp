

class Solution {
public:
    bool isValid(string s) {
        if(s[0] == ')' || s[0] == '}' || s[0] == ']') return false;

        vector<char> vec;
         
        for(int i = 0; i < s.length(); i++) {
            
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                vec.push_back(s[i]);
            }
            else {
                if(vec.size() != 0) {
                    int x = vec.size() - 1;

                    if((s[i] == ')' && vec[x] == '(') || 
                       (s[i] == '}' && vec[x] == '{') || 
                       (s[i] == ']' && vec[x] == '[')) {
                        vec.pop_back();
                    } 
                    else {
                        return false;
                    }
                }
                else if(vec.size() == 0 && (s[i] == ')' || s[i] == '}' || s[i] == ']')) {
                    return false;
                }
            }
        }

        if(vec.size() == 0) return true;
        else return false;
    }
};
 