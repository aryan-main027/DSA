class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int col = accounts[0].size();
        vector<int>ans(row,0);

        for(int i = 0 ; i<row ; i++){
            int sum = 0 ;
            for(int j = 0 ; j<col ; j++){
                sum+=accounts[i][j];
            }

            ans[i] = sum;
        }

        int largest = INT_MIN;

        for(int i = 0 ; i<row ; i++){
            largest = max(largest,ans[i]);
        }

        return largest;
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna