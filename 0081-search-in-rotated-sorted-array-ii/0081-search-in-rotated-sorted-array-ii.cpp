class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // int low=0,high=n-1;

        // while(low<=high){
        //     int mid=low+(high-low)/2;

        //     if(nums[mid]==target){
        //         return true;
        //     }else if(nums[mid]<target){
        //         low=mid+1;
        //     }else{
        //         high=mid-1;
        //     }
        // }

        int n=nums.size();
        int low=0,high=n-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target) return true;

            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
            }else if(nums[mid]>=nums[low]){
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna