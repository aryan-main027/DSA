class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int curr = 0;
        int maxi = INT_MIN;
        
        for(int num : nums){
            if(curr < 0 ) curr = 0;
            curr += num;
            maxi = max(curr,maxi);
        }

        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna