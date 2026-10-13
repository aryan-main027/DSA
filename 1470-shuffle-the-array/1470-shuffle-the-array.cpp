class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);

        int a = 0 , b = n-1 , c = n , d = 2*n-1 , i = 0;

        while(a<=b && c<=d){
            ans[i++] = nums[a++];
            ans[i++] = nums[c++];
        }

        while(a <= b){
            ans[i++] = nums[a++];
        }

        while(c <= d){
            ans[i++] = nums[c++];
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna