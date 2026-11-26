class Solution {
    public int addDigits(int num) {
        // int sum=0;

        // while(num/10 != 0){
        //     sum = num/10 + num%10;
        //     num = sum;
        // }

        // return num;

        if(num == 0) return num;

        return 1+(num-1)%9;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna