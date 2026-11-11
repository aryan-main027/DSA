
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int i = 0, j = arr.size() - 1;

        while(i < j) {
            int sum = arr[i].first + arr[j].first;

            if(sum == target) {
                return {arr[i].second, arr[j].second};
            }
            else if(sum > target) {
                j--;
            }
            else {
                i++;
            }
        }

        return {};
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna