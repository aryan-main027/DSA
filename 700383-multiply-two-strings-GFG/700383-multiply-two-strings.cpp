class Solution {
  public:
    string multiplyStrings(string &s1, string &s2) {
        int n = s1.size(), m = s2.size();

        // Handle signs
        bool neg1 = false, neg2 = false;
        int i = 0, j = 0;

        if (s1[i] == '-') {
            neg1 = true;
            i++;
        }

        if (s2[j] == '-') {
            neg2 = true;
            j++;
        }

        // Remove leading zeros
        while (i < n && s1[i] == '0') i++;
        while (j < m && s2[j] == '0') j++;

        // If either number is zero
        if (i == n || j == m) return "0";

        // Result array
        vector<int> ans(n + m, 0);

        for (int a = n - 1; a >= i; a--) {
            for (int b = m - 1; b >= j; b--) {
                int x = s1[a] - '0';
                int y = s2[b] - '0';

                int product = x * y + ans[a + b + 1];

                ans[a + b + 1] = product % 10;
                ans[a + b] += product / 10;
            }
        }

        // Build the result string
        string result;
        int k = 0;

        while (k < ans.size() && ans[k] == 0) {
            k++;
        }

        while (k < ans.size()) {
            result.push_back(ans[k] + '0');
            k++;
        }

        // Apply sign if exactly one number is negative
        if (neg1 != neg2) {
            result = "-" + result;
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna