class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);

        // vector<int>pos(nums.size()/2,0);
        // vector<int>neg(nums.size()/2,0);

        // int a=0,b=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0)
        //         neg[b++]=nums[i];
        //     else
        //         pos[a++]=nums[i];
        // }
        
        // a=0,b=0;

        // ans[0] = pos[a++];

        // int i=1;
        // while(a<pos.size() && b<neg.size()){
        //     if(ans[i-1] < 0){
        //         ans[i++]=pos[a++];
        //     }else{
        //         ans[i++]=neg[b++];
        //     }
        // }

        // ans[i]=neg[b];

        int pos=0;
        int neg=1;

        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                ans[pos]=nums[i];
                pos+=2;
            }else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna