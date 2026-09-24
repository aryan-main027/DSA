class Solution {
  public:
    int minTime(vector<int>& arr, int k) {

        int n = arr.size();

        int start = 0, end = 0;

        for(int x : arr) {
            start = max(start, x);
            end += x;
        }

        if(k >= n)
            return start;

        if(k == 1)
            return end;

        int ans = end;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            int count = 1;
            int total_paint = 0;

            for(int x : arr) {

                if(total_paint + x > mid) {
                    total_paint = x;
                    count++;
                }
                else {
                    total_paint += x;
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

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna