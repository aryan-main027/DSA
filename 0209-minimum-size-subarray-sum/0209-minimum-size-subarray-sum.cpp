class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int end = 0 , start = 0;
        int sum = 0 , ans = INT_MAX;
        while(end < n){
            sum += nums[end];

            while(sum >= target){
                ans = min(ans,end-start+1);
                sum -= nums[start++];
            }

            end++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna