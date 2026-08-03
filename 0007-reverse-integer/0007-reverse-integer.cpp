class Solution {
public:
    int reverse(int x){
        // Current Complexity:
        // Time: O(log10(x)) - We iterate through the digits of the number.
        // Space: O(1) - Constant space used.
        // This is the optimal complexity for this problem.

        int ans = 0;

        while(x){
            // Critical Bug: Integer Overflow. 
            // When reversing a number like 1534236469, 'ans * 10' will exceed the 32-bit integer limit.
            // LeetCode constraints specify that the input is a signed 32-bit integer, 
            // and you must return 0 if the reversed integer overflows.
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)) 
                return 0;
            ans = ans*10 + x%10;
            x = x/10;
        }
        return ans;
    }
};

// COACHING HINTS:
// 1. To handle overflow, you can use a 'long' variable for 'ans' and check if it exceeds INT_MAX/INT_MIN.
// 2. Alternatively, check if 'ans > INT_MAX/10' before multiplying by 10.
// 3. Be careful with INT_MIN; consider using the modulo operator on the negative number directly 
//    instead of converting to positive.
// 4. If you get stuck, check the "Video Solutions" section in the Solutions tab on the left pane!

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna