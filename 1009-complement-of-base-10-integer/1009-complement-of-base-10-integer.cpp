class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1;
        // Welcome! The goal is to flip all bits of the binary representation of n.
        // Note: We only flip bits from the highest set bit downwards (ignore leading zeros).
        
        // CONCEPTUAL APPROACH:
        // 1. Special Case: If n is 0, the complement is 1.
        // 2. Find a mask that has all 1s for the length of n's binary representation.
        //    Example: If n = 5 (101 in binary), mask should be 7 (111 in binary).
        // 3. The result is (n XOR mask), which flips all bits of n.
        
        // HINT: You can create the mask by finding the smallest power of 2 
        // greater than n and subtracting 1.
        
        int bit = floor(log2(n)) + 1;
        int mask = (1 << bit) - 1;

        int complement = ~n & mask;

        return complement;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna