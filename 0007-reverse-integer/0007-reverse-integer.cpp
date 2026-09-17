class Solution {
public:
    int reverse(int num) {
        long long x = 0;
        while(num){
            int digit = num%10;
            num/=10;
            if(x*10 >= (-1)*pow(2,31) && x*10 <= (pow(2,31) -1)) 
            x = x*10 + digit;
            else 
            return 0;
        }

        return (int)x;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna