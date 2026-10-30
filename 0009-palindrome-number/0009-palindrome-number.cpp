class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        long long xcopy = 0;
        int n = x;
        while(n){
            int digit = n%10;
            n=n/10;
            xcopy = xcopy*10 + digit;
        }

        return (int)xcopy == x;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna