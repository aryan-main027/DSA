class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        if (n == 0) return "";
        if (n == 1) return strs[0];

        string common = strs[0];

        for (int i = 1; i < n; i++) {
            string str2 = strs[i];
            string temp = "";

            int a = 0, b = 0;

            while (a < common.size() && b < str2.size()) {
                if (common[a] != str2[b])
                    break;

                temp += common[a];
                a++;
                b++;
            }

            common = temp;

            if (common == "")
                return "";
        }

        return common;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna