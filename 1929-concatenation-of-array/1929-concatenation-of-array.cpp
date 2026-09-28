class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(2*nums.size(),0);

        int i = 0 , k = 0;
        while(i<2*nums.size()){
            if(k == nums.size()){
                k = 0;
            }
            ans[i] = nums[k];
            i++,k++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna