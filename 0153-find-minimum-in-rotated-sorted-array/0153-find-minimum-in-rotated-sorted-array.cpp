class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();

        int start = 0 , end = n-1;
        int ans = arr[0];
        while(start <= end){
            int mid = start + (end - start)/2;

            if(arr[0] <= arr[mid]){
                start = mid + 1;
            } else{
                ans = arr[mid];
                end = mid - 1;
            }
        }

        return ans;
    }
};

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 1) return nums[0];

//         int start = 0, end = n - 1;
//         int pos = 0;

//         int front = nums[0];

//         // Handle already sorted array
//         if (nums[0] < nums[n - 1])
//             return nums[0];

//         while (start <= end) {
//             int mid = start + (end - start) / 2;

//             // Handle boundaries separately
//             if (mid == 0) {
//                 if (nums[mid] <= nums[mid + 1])
//                     return nums[mid];
//             }
//             else if (mid == n - 1) {
//                 if (nums[mid - 1] >= nums[mid])
//                     return nums[mid];
//             }
//             else {
//                 // Your original logic
//                 if (nums[mid - 1] >= nums[mid] &&
//                     nums[mid] <= nums[mid + 1]) {
//                     return nums[mid];
//                 }
//             }

//             // Your original direction logic
//             if (mid > 0 && nums[mid - 1] < nums[mid]) {
//                 if (nums[mid] > front)
//                     start = mid + 1;
//                 else
//                     end = mid - 1;
//             }
//             else {
//                 start = mid + 1;
//             }
//         }

//         return nums[pos];
//     }
// };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna