class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);

        // unordered_map<int,int>m;

        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]] = i;
        // }

        // sort(nums.begin(),nums.end());

        vector<int>pos(nums.size()/2,0);
        vector<int>neg(nums.size()/2,0);

        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
                neg[b++]=nums[i];
            else
                pos[a++]=nums[i];
        }
        
        a=0,b=0;

        ans[0] = pos[a++];

        int i=1;
        while(a<pos.size() && b<neg.size()){
            if(ans[i-1] < 0){
                ans[i++]=pos[a++];
            }else{
                ans[i++]=neg[b++];
            }
        }

        ans[i]=neg[b];

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna