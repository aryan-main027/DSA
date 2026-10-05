class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1 , start = 0 , end = 0 , n = nums.size();
        int count = 0;
        while(end < n){
            
            product *= nums[end];

            while(product>=k && start <= end){
                product /= nums[start++];
            }

            count += 1 + (end-start);
            end++;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna