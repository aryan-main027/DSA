
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        bool isNeg = false;

        // 1. Skip leading whitespace
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // 2. Handle sign
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            isNeg = (s[i] == '-');
            i++;
        }

        // 3. Extract digits
        long long result = 0;

        for (int x = i; x < s.size(); x++) {

            // Stop at non-digit character
            if (s[x] < '0' || s[x] > '9') {
                break;
            }

            int digit = s[x] - '0';

            // 4. Check overflow before multiplication
            if (result > INT_MAX / 10 ||
                (result == INT_MAX / 10 && digit > (isNeg ? 8 : 7))) {
                return isNeg ? INT_MIN : INT_MAX;
            }

            result = result * 10 + digit;
        }

        // 5. Apply sign
        return isNeg ? (int)(-result) : (int)result;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna