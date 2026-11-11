class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        int col = mat[0].size();

        // // Mat -> Transpose -> reverse[col] == ans

        // for(int i = 0 ; i<row-1 ; i++){
        //     for(int j = i+1 ; j<col ; j++){
        //         swap(mat[i][j],mat[j][i]);
        //     }
        // }

        // for(int i = 0 ; i<row ; i++){
        //     int j = 0 , k = col-1;
        //     while(j<=k){
        //         swap(mat[i][j],mat[i][k]);
        //         j++,k--;
        //     }
        // }

        //  4 way Cyclic swaping 
        for(int i=0;i<n;i++){
            for(int j=i;j<n-i-1;j++){
                int temp = mat[i][j];

                mat[i][j] = mat[n-1-j][i];

                mat[n-1-j][i] = mat[n-1-i][n-1-j];

                mat[n-1-i][n-1-j] = mat[j][n-1-i];

                mat[j][n-1-i] = temp;
            }
        }

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna