class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int n = arr.size();
        int pos = 0;
        int start = 0 , end = n-1;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(arr[mid] != 0){
                start = mid + 1;
            }else{
                pos = mid;
                end = mid - 1;
            }
        }
        
        if(pos == 0){
            return n;
        }
        
        return (n-pos);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna