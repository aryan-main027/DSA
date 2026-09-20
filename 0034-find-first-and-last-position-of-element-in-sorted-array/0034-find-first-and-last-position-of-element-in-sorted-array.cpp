class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        vector<int>res;

        int start = 0 , end = n-1;
        int pos1 = -1;
        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                pos1 = mid;
                end = mid - 1;
            }else if(nums[mid] > target){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        
        start = 0 , end = n-1;
        int pos2 = -1;
        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                pos2 = mid;
                start = mid + 1;
            }else if(nums[mid] > target){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        res.push_back(pos1);
        res.push_back(pos2);
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna