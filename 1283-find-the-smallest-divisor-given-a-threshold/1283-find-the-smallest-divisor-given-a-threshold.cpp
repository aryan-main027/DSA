class Solution {
public:
    int sum(int x,vector<int>& nums){
        int sum_div=0;
        for(int i=0;i<nums.size();i++){
            sum_div += (nums[i] + x - 1) / x;
        }

        return sum_div;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n=nums.size();
        int low = 1,high = *max_element(nums.begin(), nums.end());
        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;

            int total_sum=sum(mid,nums);

            if(total_sum<=threshold){
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