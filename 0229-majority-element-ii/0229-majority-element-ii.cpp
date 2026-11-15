class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;

        for(int x : nums){
            m[x]++;
        }

        vector<int>ans;

        int x = nums.size() / 3;

        for(auto it = m.begin(); it != m.end(); it++){

            if(it->second > x){
                ans.push_back(it->first);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna