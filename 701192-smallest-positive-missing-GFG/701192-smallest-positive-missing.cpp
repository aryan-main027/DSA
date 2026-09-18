class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        
        int size = arr.size();
        int count = 1;
        for(int i = 0 ; i<size ; i++){
            if(arr[i] < 0){
                continue;
            }else if(arr[i] == count){
                count++;
            }else if(arr[i] < count){
                continue;
            }else{
                return count;
            }
        }
        
        return count;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna