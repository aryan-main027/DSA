class Solution {
  public:
    vector<int> matrixDiagonally(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> ans;

        int d = 0;

        while (d < (2 * n - 1)) {

            int start = max(0, d - (n - 1));
            int end = min(n - 1, d);
            int i, j;

            if (d % 2 == 0) {
                i = end;

                while (i >= start) {
                    j = d - i;
                    ans.push_back(mat[i][j]);
                    i--;
                }
            }
            else {
                i = start;

                while (i <= end) {
                    j = d - i;
                    ans.push_back(mat[i][j]);
                    i++;
                }
            }

            d++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna