class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>x(101,0);

        for(int i = 0; i<n ; i++){
            x[nums[i]]++;
        }
        int sum = 0;
        for(int i = 0 ; i<x.size() ; i++){
            if(x[i] == 1){
                sum += i;
            }
        }

        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna