class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int i = 0, j = 0;
        long long sum = 0;
        int ans = 0;

        while (i < nums.size()) {

            sum += nums[i];

            long long cost = 1LL * nums[i] * (i - j + 1) - sum;

            while (cost > k) {
                sum -= nums[j];
                j++;

                cost = 1LL * nums[i] * (i - j + 1) - sum;
            }

            ans = max(ans, i - j + 1);

            i++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna