class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        int break_point = 0; 
        for(int i=0;i<n;i++){
            if(nums[i] > nums[(i+1)%n]){
                break_point++;
            }
        } 

        return break_point <= 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna