class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // Welcome! The goal is to find the total number of squares in an N*N grid.
        // Hint 1: Think about squares of different sizes. 
        // There are N*N squares of size 1x1, (N-1)*(N-1) squares of size 2x2, and so on.
        // Hint 2: The total number of squares is the sum of squares from 1^2 up to N^2.
        // Formula: Sum = (N * (N + 1) * (2*N + 1)) / 6
        // Note: Use 'long long' to avoid overflow during multiplication.
        
        // Your current implementation is empty.
        // Expected Time Complexity: O(1) using the formula.
        // Expected Space Complexity: O(1).
        
        // Implement the formula here!
            long long sum = 0;
            for(long long i = 0 ; i<N ; i++){
                sum += (N-i)*(N-i);
            }
            
            return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna