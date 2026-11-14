class Solution {
public:
    int climbStairs(int n) {

        if(n <= 2)return n;
        vector<int>dp(2);
        dp[0]=1,dp[1]=2;
        for(int i=3;i<=n;i++){
            int curr=dp[0]+dp[1];
            dp[0]=dp[1];
            dp[1]=curr;
        }

        return dp[1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna