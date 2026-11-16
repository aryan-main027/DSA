
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for (int x : nums) {
            st.insert(x);
        }

        int maxCount = 0;

        for (auto it = st.begin(); it != st.end(); it++) {
            int currentNum = *it;
            int count = 1;

            if (st.count(currentNum - 1) == 0) {
                while (st.count(currentNum + 1)) {
                    count++;
                    currentNum++;
                }
            }

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna