class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for(char ch : s) {
            freq[ch]++;
        }

        vector<pair<char,int>>smap;

        for(auto it:freq){
            smap.push_back(make_pair(it.first,it.second));
        }

        sort(smap.begin(),smap.end(),[](auto& a,auto& b){
            return a.second > b.second;
        });

        string ans = "";

        for(auto it:smap){
            ans.append(it.second,it.first);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna