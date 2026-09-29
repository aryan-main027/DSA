class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 , maxCount = 0;

        for(int i : nums){
            if(i == 1) {
                count++;
                maxCount = max(maxCount,count);
                continue;
            }
            count = 0;
        }

        return maxCount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna