
class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        int streak = 1;
        int total = 0;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > arr[i - 1]) {
                streak++;
            } else {
                streak = 1;
            }

            total += streak - 1;
        }

        return total;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna