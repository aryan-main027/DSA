class Solution {
  public:
    int sumBetweenK1K2(vector<int>& arr, int k1, int k2) {
        // code here
        int n = arr.size();
        
        priority_queue<int>pq;
        
        for(int i = 0 ; i<k2 ; i++){
            pq.push(arr[i]);
        }
        
        for(int i = k2 ; i<n ; i++){
            if(pq.top() > arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        int sum = 0;
        int iteration = k2-k1;
        pq.pop();
        while(--iteration){
            sum += pq.top();
            pq.pop();
        }
        
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna