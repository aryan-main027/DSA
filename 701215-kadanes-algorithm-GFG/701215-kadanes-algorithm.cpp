class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int sum = 0;
        int maxSum = arr[0];
        
        for(int x : arr){
            // sum += x;
            sum = max(x,sum+x);
            maxSum = max(maxSum,sum);
        }
        
        return maxSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna