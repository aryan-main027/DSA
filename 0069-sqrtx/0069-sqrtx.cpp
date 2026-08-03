class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        int start = 1 , end = x;
        int ans = 0;
        while(start<=end){
            int mid = start + (end - start)/2;

            if(mid <= x/mid){
                start = mid + 1;
                ans = mid;
            } else 
                end = mid - 1;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna