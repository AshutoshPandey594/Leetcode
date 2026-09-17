class Solution {
public:
    string fun1(string s, string part) {
        
        for (int i = 0; i + part.length() <= s.length(); i++) {
            
            if (s.substr(i, part.length()) == part) {
                s.erase(i, part.length());
                return fun1(s, part);
            }
        }
        
        return s;
    }

    string removeOccurrences(string s, string part) {
        return fun1(s, part);
    }
};