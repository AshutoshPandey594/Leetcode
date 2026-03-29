class Solution {
public:
    int reverse(int x) {
int revx = 0;

        while (x != 0) {
            int digit = x % 10;

            // Check BEFORE overflow happens
            if (revx > INT_MAX / 10 || revx < INT_MIN / 10) {
                return 0;
            }

            revx = revx * 10 + digit;
            x /= 10;
        }

        return revx;
    
    }
};