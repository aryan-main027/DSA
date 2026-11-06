class Solution {
public:

    void compare_count(vector<int>& ans, vector<int>& nums,
                       vector<int>& indices, int low, int mid, int high) {

        int a = low, b = mid + 1;
        vector<int> temp;

        while (a <= mid && b <= high) {

            if (nums[indices[a]] <= nums[indices[b]]) {
                ans[indices[a]] += (b - (mid + 1));
                temp.push_back(indices[a++]);
            }
            else {
                temp.push_back(indices[b++]);
            }
        }

        while (a <= mid) {
            ans[indices[a]] += (b - (mid + 1));
            temp.push_back(indices[a++]);
        }

        while (b <= high) {
            temp.push_back(indices[b++]);
        }

        for (int i = 0; i < temp.size(); i++) {
            indices[low + i] = temp[i];
        }
    }

    void divide(vector<int>& ans, vector<int>& nums,
                vector<int>& indices, int low, int high) {

        if (low >= high) return;

        int mid = low + (high - low) / 2;

        divide(ans, nums, indices, low, mid);
        divide(ans, nums, indices, mid + 1, high);

        compare_count(ans, nums, indices, low, mid, high);
    }

    vector<int> countSmaller(vector<int>& nums) {

        vector<int> ans(nums.size(), 0);
        vector<int> indices(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            indices[i] = i;
        }

        divide(ans, nums, indices, 0, nums.size() - 1);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna