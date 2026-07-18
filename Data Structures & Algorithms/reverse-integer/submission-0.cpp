class Solution {
public:
    int reverse(int x) {
        int a = 0;
        while (x != 0) {
            int digit = x % 10;

            // Check if multiplying or adding would cause overflow
            if (a > INT_MAX / 10 || (a == INT_MAX / 10 && digit > 7)) return 0;
            if (a < INT_MIN / 10 || (a == INT_MIN / 10 && digit < -8)) return 0;

            a = a * 10 + digit;
            x /= 10;
        }
        return a;
    }
};
