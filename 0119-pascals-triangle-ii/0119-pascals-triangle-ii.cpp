// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
//         vector<int> prev;

//         for(int i = 0; i <= rowIndex; i++) {
//             vector<int> row(i + 1, 1);

//             if(!prev.empty()) {
//                 for(int j = 1; j < prev.size(); j++) {
//                     row[j] = prev[j] + prev[j-1];
//                 }
//             }

//             prev = row;
//         }

//         return prev;
//     }
// };

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex + 1, 1);

        long long val = 1;

        for(int i = 1; i <= rowIndex; i++) {
            val = val * (rowIndex - i + 1) / i;
            ans[i] = val;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna