class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int n = arr.size();
        if (n < 3) return {};

        int first = INT_MAX, second = INT_MAX;
        int firstIndex = -1, secondIndex = -1;
        int savedFirstIndex = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] <= first) {
                first = arr[i];
                firstIndex = i;
            }
            else if (arr[i] <= second) {
                second = arr[i];
                secondIndex = i;
                savedFirstIndex = firstIndex;
            }
            else {
                return {arr[savedFirstIndex], arr[secondIndex], arr[i]};
            }
        }

        return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna