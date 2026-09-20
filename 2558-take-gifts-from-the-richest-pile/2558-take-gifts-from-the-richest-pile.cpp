class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k){ 
        int n = gifts.size();

        priority_queue<long long>pq;

        for(int i : gifts)
        pq.push(i);
        
        long long res = 0;
        while(k--){
            long long a = pq.top();
            pq.pop();
            pq.push(floor(pow(a,0.5)));
        }

        while(!pq.empty()){
            res += pq.top();
            pq.pop();
        }

        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna