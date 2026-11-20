class Solution {
public:

    int Largest_Subarray(vector<int>& nums, int mid, int k) {
        int sum = 0, copy_k = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (mid >= sum + nums[i]) {
                sum += nums[i];
            } else {
                sum = nums[i];
                copy_k++;
            }
        }

        return copy_k;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int copy_k = Largest_Subarray(nums, mid, k);

            if (copy_k <= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna