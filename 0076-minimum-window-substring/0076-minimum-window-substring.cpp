class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> m;

        int m1 = s.size(), n = t.size();
        int end = 0, start = 0, ans = INT_MAX, index = -1;
        int total = n;

        for (char c : t) {
            m[c]++;
        }

        while (end < m1) {
            m[s[end]]--;

            if (m[s[end]] >= 0)
                total--;

            while (!total && start <= end) {

                if (ans > (end - start + 1)) {
                    ans = end - start + 1;
                    index = start;
                }

                m[s[start]]++;

                if (m[s[start]] > 0)
                    total++;

                start++;
            }

            end++;
        }

        if (index == -1)
            return "";

        return s.substr(index, ans);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna