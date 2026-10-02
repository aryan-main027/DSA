class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here
        unordered_map<int,int>m;
        int total = 0;
        // vector<int>prefix(arr.size(),0);
        int prefixSum = 0;
        
        m[0] = 1;
        
        for(int i = 0 ; i<arr.size() ; i++){
            prefixSum += arr[i];
            
            if(m.count(prefixSum)){
                total += m[prefixSum];
                m[prefixSum]++;
            }else{
                m[prefixSum] = 1;
            }
        }
        
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna