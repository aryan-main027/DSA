class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();

        int start = 0 , end = n-1;
        int pos = n;
        while(start <= end){
            int mid = start + (end - start)/2;

            if((arr[mid] - mid - 1) >= k){
                pos = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }

        return pos+k;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna