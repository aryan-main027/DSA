
class Solution {
public:
    // int fibonacci(int n, vector<int>& dp) {
    //     if (n <= 1)
    //         return n;

    //     if (dp[n] != -1)
    //         return dp[n];

    //     return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
    // }

    int fib(int n) {
        vector<int> dp(n + 1, -1);
        // return fibonacci(n, dp);

        if(n<=1)return n;
        
        dp[0]=0,dp[1]=1;

        for(int i=2;i<n+1;i++){
            dp[i]=dp[i-1]+dp[i-2];       
        }

        return dp[n];
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna