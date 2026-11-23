
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Find maximum element in middle column
            int maxRow = 0;

            for (int i = 0; i < m; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            int current = mat[maxRow][mid];

            // Handle boundaries
            int left = (mid == 0) ? -1 : mat[maxRow][mid - 1];
            int right = (mid == n - 1) ? -1 : mat[maxRow][mid + 1];

            // Check whether current element is a peak
            if (current > left && current > right) {
                return {maxRow, mid};
            }

            // Move towards the larger neighbour
            else if (left > current) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna