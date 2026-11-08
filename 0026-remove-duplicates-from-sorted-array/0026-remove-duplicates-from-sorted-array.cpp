class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();

        if(n == 0) return 0;

        int i = 0;

        for(int j = 1; j < n; j++){
            if(arr[i] != arr[j]){
                arr[++i] = arr[j];
            }
        }

        return i + 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna