class Solution {
public:
    int shipWithinDays(vector<int>& arr, int k) {
        int n = arr.size();
        
        int ans = -1;
        int start = 0 , end = 0 ;
        for(int i = 0 ; i<n ; i++){
            start = max(start,arr[i]);
            end += arr[i];
        }
        
        while(start <= end){
            int mid = start + (end - start)/2;
            
            int h = 1 , pages = 0 ;
            
            for(int i = 0 ; i<n ; i++){
                if(mid >= (pages + arr[i]))
                    pages += arr[i];
                else {
                    h++;
                    pages = arr[i];
                }
            }
            
            if(k >= h){
                ans = mid;
                end = mid - 1;
            }else {
                start = mid + 1;
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna