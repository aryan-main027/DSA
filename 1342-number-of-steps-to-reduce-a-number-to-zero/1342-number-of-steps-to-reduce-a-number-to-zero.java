class Solution {
    public int numberOfSteps(int num) {
        int count=0;
        while(num != 0){
            if(num%2 == 0){
                count++;
                num/=2;
            }else{
                count++;
                num-=1;
            }
        }

        return count;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna