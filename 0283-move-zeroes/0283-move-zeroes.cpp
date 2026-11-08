class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),i=0,j=1;

        while(i<j && j<n){
            if(nums[i]==0&&nums[j]!=0){
                swap(nums[i++],nums[j++]);
            }else if(nums[i]==0&&nums[j]==0){
                j++;
            }else{
                i++,j++;
            }
        }

        return;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna