class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int count = 0;
        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i] == target){
                count++;
            }
        }
        
        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna