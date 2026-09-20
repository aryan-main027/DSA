class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;

        int n = stones.size();

        for(int i = 0 ; i<n ; i++){
            pq.push(stones[i]);
        }

        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            a-=pq.top();
            pq.pop();

                pq.push(a);
        }

        return pq.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna