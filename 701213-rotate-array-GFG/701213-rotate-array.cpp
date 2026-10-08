class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        
        d = d%arr.size();
        
        vector<int>ans;
        
        for(int i=d;i<arr.size();i++){
            ans.push_back(arr[i]);
        }
        
        for(int i=0;i<d;i++){
            ans.push_back(arr[i]);
        }
        
        for(int i = 0;i<ans.size();i++){
            arr[i] = ans[i];
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna