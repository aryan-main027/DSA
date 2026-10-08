class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;

        for(int i = 0; i < n - 1; i++) {
            if(arr[i] >= arr[i + 1]) {

                while(!ans.empty() && ans.back() < arr[i]) {
                    ans.pop_back();
                }

                ans.push_back(arr[i]);
            }
        }
        
        while(!ans.empty() && ans.back() < arr[n - 1]) {
            ans.pop_back();
        }

        ans.push_back(arr[n - 1]);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna