class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();

        priority_queue<int>pq;

        for(int num : nums)
        pq.push(num);

        while(--k){
            pq.pop();
        }

        return pq.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna