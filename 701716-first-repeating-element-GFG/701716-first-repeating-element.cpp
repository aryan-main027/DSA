class Solution {
public:
    int firstRepeated(vector<int> &arr) {
        unordered_map<int, int> freq;

        for (int x : arr) {
            freq[x]++;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (freq[arr[i]] > 1) {
                return i + 1;
            }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna