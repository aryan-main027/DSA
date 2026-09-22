class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        
        for(int x = 0 ; x<=n ; x++){
            int count = 0 ;

            for(int num : nums){
                if(num >= x) count++;
            }

            if(count == x){
                return x;
            }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna