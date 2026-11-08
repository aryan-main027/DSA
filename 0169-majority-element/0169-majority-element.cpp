class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> m;

        for(int x : nums){
            m[x]++;
        }

        int x = nums.size() / 2;
        int ans = -1;

        for(auto it = m.begin(); it != m.end(); it++){

            if(it->second > x){
                ans = it->first;
                break;
            }
        }

        return ans;

        // int cand = 0 , vote = 0;

        // for(int i = 0 ; i<nums.size() ; i++){
        //     if(vote == 0){
        //         cand = nums[i];
        //         vote++;
        //     }else{
        //         if(cand == nums[i]){
        //             vote++;
        //         }else{
        //             vote--;
        //         }
        //     }
        // }

        // // verify 
        // int total_vote = 0;
        // for(int i = 0 ; i<nums.size() ; i++){
        //     if(cand == nums[i]){
        //         total_vote++;
        //     }
        // }
        // int av = nums.size()/2;
        // if(av < total_vote){
        //     return cand;
        // }

        // return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna