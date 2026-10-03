class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum = 0;
        int start = 0, end = 0, n = nums.size();
        long long count = 0;

        while(end < n){
            sum += nums[end];

            while(sum * (end - start + 1) >= k && start <= end){
                sum -= nums[start++];
            }

            count += 1 + (end - start);
            end++;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna