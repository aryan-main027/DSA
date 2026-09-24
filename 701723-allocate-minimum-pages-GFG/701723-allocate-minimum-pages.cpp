class Solution {
  public:
    int findPages(vector<int> &arr, int k) {

        int n = arr.size();

        if(k > n)
            return -1;

        long long start = 0;
        long long end = 0;

        for(int x : arr) {
            start = max(start, (long long)x);
            end += x;
        }

        long long ans = -1;

        while(start <= end) {

            long long mid = start + (end - start) / 2;

            long long pages = 0;
            int count = 1;

            for(int i = 0; i < n; i++) {

                if(pages + arr[i] > mid) {
                    count++;
                    pages = arr[i];
                }
                else {
                    pages += arr[i];
                }
            }

            if(count <= k) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return (int)ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna