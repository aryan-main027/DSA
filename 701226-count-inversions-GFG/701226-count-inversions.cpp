class Solution {
public:

    void compare(vector<int>& arr, long long& count, int low, int mid, int high) {
        int a = low;
        int b = mid + 1;

        vector<int> temp;

        while (a <= mid && b <= high) {
            if (arr[a] <= arr[b]) {
                temp.push_back(arr[a++]);
            }
            else {
                count += (mid - a + 1);
                temp.push_back(arr[b++]);
            }
        }

        while (a <= mid) {
            temp.push_back(arr[a++]);
        }

        while (b <= high) {
            temp.push_back(arr[b++]);
        }

        for (int i = 0; i < temp.size(); i++) {
            arr[low + i] = temp[i];
        }
    }

    void Inversion(long long& count, vector<int>& arr, int low, int high) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;

        Inversion(count, arr, low, mid);
        Inversion(count, arr, mid + 1, high);

        compare(arr, count, low, mid, high);
    }

    long long int inversionCount(vector<int>& arr) {
        long long count = 0;

        Inversion(count, arr, 0, arr.size() - 1);

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna