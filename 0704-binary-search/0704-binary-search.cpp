class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0 , end = n-1;
        while(start<=end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                end = mid - 1;
            else 
                start = mid + 1;
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna