class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int max_pro = arr[0];
        int min_pro = arr[0];
        int overall = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            int max_1 = max_pro * arr[i];
            int min_1 = min_pro * arr[i];

            int new_max = max(arr[i], max(max_1, min_1));
            int new_min = min(arr[i], min(max_1, min_1));

            max_pro = new_max;
            min_pro = new_min;

            overall = max(overall, max_pro);
        }

        return overall;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna