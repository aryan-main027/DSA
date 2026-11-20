
class Solution {
public:

    int Days(vector<int>& weights, int x) {
        int count_weight = 0, day = 1;

        for (int i = 0; i < weights.size(); i++) {
            if (x >= count_weight + weights[i]) {
                count_weight += weights[i];
            } else {
                day++;
                count_weight = weights[i];
            }
        }

        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int total_days = Days(weights, mid);

            if (total_days <= days) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna