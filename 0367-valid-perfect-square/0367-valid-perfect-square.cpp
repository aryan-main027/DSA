class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        int start = 1 , end = num-1;
        while(start <= end){
            int mid = start + (end - start)/2;

            if(mid == num/mid && num%mid == 0) return true;
            else if(mid > num/mid) end = mid - 1;
            else start = mid + 1;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna