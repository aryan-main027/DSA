class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one = 0 , zero = 0 , two = 0;

        for(int i : nums){
            if(i == 0 ) zero++;
            if(i == 1) one++;
            if( i == 2) two++;
        }

        int index = 0;
        while(zero--){
            nums[index++] = 0;
        }
        while(one--){
            nums[index++] = 1;
        }
        while(two--){
            nums[index++] = 2;
        }

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna