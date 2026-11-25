class Solution {
    public int reverse(int num) {
        long x = 0;

        while (num != 0) {
            int digit = num % 10;
            num /= 10;

            x = x * 10 + digit;

            if (x > Integer.MAX_VALUE || x < Integer.MIN_VALUE) {
                return 0;
            }
        }

        return (int) x;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna