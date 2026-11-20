class Solution {
public:

    bool isPossible(vector<int>& bloomDay,int day,int m,int k){
        int consecutive=0;
        int bouquet=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                consecutive++;
                if(consecutive>=k){
                    bouquet++;
                    consecutive%=k;
                }
            }else{
                consecutive=0;
            }
        }

        if(bouquet>=m)return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end()),high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans=-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(isPossible(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }

        return ans;
    } 
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna