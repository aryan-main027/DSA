class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int curr = nums[i];

            int tempMax = max({curr, maxi * curr, mini * curr});
            int tempMin = min({curr, maxi * curr, mini * curr});

            maxi = tempMax;
            mini = tempMin;

            ans = max(ans, maxi);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna