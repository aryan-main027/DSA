class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        vector<int>pos;
        vector<int>neg;
        
        for(int i = 0 ; i<n ; i++){
            if(arr[i] >= 0)
               pos.push_back(arr[i]);
            else {
                neg.push_back(arr[i]);
            }
        }
        
        pos.insert(pos.end(),neg.begin(),neg.end());
        
        for(int i = 0 ; i < n ; i++){
            arr[i] = pos[i];
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna