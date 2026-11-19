
class Solution {
public:

    long long hour_taken(vector<int>& nums, int x) {
        long long count = 0;

        for (int i = 0; i < nums.size(); i++) {
            count += ((long long)nums[i] + x - 1) / x;
        }

        return count;
    }

    int minEatingSpeed(vector<int>& nums, int h) {

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long k = hour_taken(nums, mid);

            if (k <= h) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna