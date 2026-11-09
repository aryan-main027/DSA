class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev;

        for(int i = 0; i <= rowIndex; i++) {
            vector<int> row(i + 1, 1);

            if(!prev.empty()) {
                for(int j = 1; j < prev.size(); j++) {
                    row[j] = prev[j] + prev[j-1];
                }
            }

            prev = row;
        }

        return prev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna