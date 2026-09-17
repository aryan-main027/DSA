class Solution {
  public:
    int setBits(int n) {
        // Code here
        int count = 0;
        while(n){
            if(n%2 == 1) count++;
            n = n/2;
        }
    
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna