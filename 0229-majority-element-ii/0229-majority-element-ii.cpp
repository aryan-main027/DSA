
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1 = 0, cand2 = 0;
        int vote1 = 0, vote2 = 0;

        // Step 1: Find potential candidates
        for (int x : nums) {
            if (x == cand1) {
                vote1++;
            }
            else if (x == cand2) {
                vote2++;
            }
            else if (vote1 == 0) {
                cand1 = x;
                vote1 = 1;
            }
            else if (vote2 == 0) {
                cand2 = x;
                vote2 = 1;
            }
            else {
                vote1--;
                vote2--;
            }
        }

        // Step 2: Verify actual frequencies
        vote1 = 0;
        vote2 = 0;

        for (int x : nums) {
            if (x == cand1) vote1++;
            else if (x == cand2) vote2++;
        }

        // Step 3: Store valid answers
        vector<int> ans;
        int n = nums.size();

        if (vote1 > n / 3) ans.push_back(cand1);
        if (vote2 > n / 3) ans.push_back(cand2);

        return ans;
    }
};


 // unordered_map<int,int> m;

// for(int x : nums){
//     m[x]++;
// }

// vector<int>ans;

// int x = nums.size() / 3;

// for(auto it = m.begin(); it != m.end(); it++){

//     if(it->second > x){
//         ans.push_back(it->first);
//     }
// }

// return ans;

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna