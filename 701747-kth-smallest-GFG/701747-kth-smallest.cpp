class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        priority_queue<int, vector<int> , greater<int>>pq;
        
        for(int x : arr){
            pq.push(x);
        }
        
        while(--k){
            pq.pop();
        }
        
        return pq.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna