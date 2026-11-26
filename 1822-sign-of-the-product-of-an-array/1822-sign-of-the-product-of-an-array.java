class Solution {
    public int arraySign(int[] nums) {
        int neg=0;

        for(int x:nums){
            if(x < 0) neg++;
            if(x == 0) return 0;
        }

        if(neg%2 == 0) return 1;
        return -1;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna