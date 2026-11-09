class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<int> ans;

        int top = 0, bottom = row - 1;
        int left = 0, right = col - 1;

        while (left <= right && top <= bottom) {

            // left -> right
            for (int i = left; i <= right; i++) {
                ans.push_back(mat[top][i]);
            }
            top++;

            // top -> bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;

            // right -> left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }

            // bottom -> top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna