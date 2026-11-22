class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(),m=mat[0].size();
        int low=0,high=n*m-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            int col=mid%m;
            int row=mid/m;

            if(mat[row][col]==target)return true;
            else if(mat[row][col] > target)high=mid-1;
            else low=mid+1;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna