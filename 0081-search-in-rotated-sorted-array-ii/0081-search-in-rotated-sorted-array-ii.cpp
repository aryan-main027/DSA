class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int start = 0 , end = nums.size()-1;
        // while(start <= end){
        //     int mid = start + (end- start)/2;

        //     if(nums[mid] == target) return true;
        //     // Left Sorted
        //     if(nums[start] <= nums[mid]){
        //         if(nums[start]<= target && target < nums[mid]){
        //             end = mid - 1;
        //         } else{
        //             start = mid+1;
        //         }
        //     } else {
        //         // Right Sorted
        //         if(nums[mid] < target && target <= nums[end]){
        //             start = mid + 1;
        //         } else {
        //             end = mid - 1;
        //         }

        //     }
        // }

        // return false;

        sort(nums.begin(),nums.end());

        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target)
                return true;
            else if(nums[mid] > target){
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }  

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna