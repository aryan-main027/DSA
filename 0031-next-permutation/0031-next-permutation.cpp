
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Step 1: Find breakpoint
        while(i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }

        // Step 2: No breakpoint
        if(i == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find successor
        int j = n - 1;

        while(nums[j] <= nums[i]) {
            j--;
        }

        // Step 4: Swap
        swap(nums[i], nums[j]);

        // Step 5: Reverse suffix
        reverse(nums.begin()+i+1, nums.end());
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna