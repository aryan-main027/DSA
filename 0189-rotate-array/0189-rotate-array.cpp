class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();

        k=k%n;

        if(nums.size() < k) return;
        
        vector<int>temp(nums.size(),0);
        
        int x=0;
        for(int i=n-k;i<n;i++){
            temp[x++]=nums[i];
        }
        for(int i=0;i<n-k;i++){
            temp[x++]=nums[i];
        }
        for(int i=0;i<n;i++)
            nums[i]=temp[i];

        return;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna