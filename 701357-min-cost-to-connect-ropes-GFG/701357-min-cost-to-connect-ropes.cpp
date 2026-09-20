class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        
        int n = arr.size();
        
        for(int i = 0 ; i<n ; i++){
            pq.push(arr[i]);
        }
        
        int ans = 0;
        while (pq.size() > 1) {
            int a = pq.top();
            pq.pop();
        
            int b = pq.top();
            pq.pop();
    
            int cost = a + b;
    
            ans += cost;
            pq.push(cost);
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna