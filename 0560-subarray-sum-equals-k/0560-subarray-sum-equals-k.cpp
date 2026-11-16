class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;

        m[0]=1;
        int sum=0,count=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];   
            int previous=sum-k;
            if(m.find(previous)!=m.end()){
                count+=m[previous];
            }
            m[sum]++;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna