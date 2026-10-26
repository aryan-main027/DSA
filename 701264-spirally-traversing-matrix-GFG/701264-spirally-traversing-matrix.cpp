class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        vector<int>ans;
        
        int row = mat.size();
        int col = mat[0].size();
        
        int top=0,left=0,right=col-1,bottom=row-1;
        
        
        while(top <= bottom && left <= right){
            
            // 1. Left to right
            for (int j = left; j <= right; j++) {
                ans.push_back(mat[top][j]);
            }
            top++;

            // 2. Top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;

            // 3. Right to left
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(mat[bottom][j]);
                }
                bottom--;
            }

            // 4. Bottom to top
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