class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        
        sort(arr.begin(),arr.end());
        int i = 0 , j = arr.size()-1;
        
        while(i<j){ 
            long long prod = (long long)arr[i] * arr[j]; 
            if(prod == target) return true;
            else if(prod > target) j--;
            else i++;
        }
        
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna