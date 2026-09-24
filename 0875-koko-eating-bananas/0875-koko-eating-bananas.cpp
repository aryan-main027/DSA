class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        int start = 1 , end = piles[n-1];
        int ans = -1;
        while(start<=end){
            int mid = start + (end - start)/2;
            long long k = 0;
            for(int i = 0 ; i<n ; i++){
                k += piles[i]/mid;
                if(piles[i]%mid != 0) k += 1;
            }

            if(k <= h) {
                ans = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna