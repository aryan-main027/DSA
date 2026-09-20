class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int start = 0 , end = n-1;
        int pos = n;
        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target) return mid;

            if(nums[mid] > target){
                pos = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }

        return pos;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna