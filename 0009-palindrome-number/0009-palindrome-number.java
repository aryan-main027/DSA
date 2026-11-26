class Solution {
    public boolean isPalindrome(int num) {
        int x = num;
        if(x < 0) return false;
        long xcopy=0;

        while(x != 0){
            int digit = x%10;
            x/=10;
            xcopy=xcopy*10+digit;
        }

        return (int)xcopy==num;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna