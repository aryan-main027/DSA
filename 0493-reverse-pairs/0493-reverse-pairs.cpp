
class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high, int& count) {
        int j = mid + 1;

        // Count reverse pairs
        for (int i = low; i <= mid; i++) {
            while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }

            count += j - (mid + 1);
        }

        // Merge two sorted halves
        int i = low;
        j = mid + 1;

        vector<int> temp;

        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            }
            else {
                temp.push_back(nums[j++]);
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i++]);
        }

        while (j <= high) {
            temp.push_back(nums[j++]);
        }

        int k = low;
        for (int x : temp) {
            nums[k++] = x;
        }
    }

    void mergeSort(vector<int>& nums, int low, int high, int& count) {
        if (low < high) {
            int mid = low + (high - low) / 2;

            mergeSort(nums, low, mid, count);
            mergeSort(nums, mid + 1, high, count);

            merge(nums, low, mid, high, count);
        }
    }

    int reversePairs(vector<int>& nums) {
        int count = 0;

        mergeSort(nums, 0, nums.size() - 1, count);

        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna