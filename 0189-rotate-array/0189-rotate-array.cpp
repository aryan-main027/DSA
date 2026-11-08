class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();

        if(n == 0) return;

        k=k%n;
        
        // This takes O(N) time and O(N) space
        // vector<int>temp(n,0);

        // int x=0;
        // for(int i=n-k;i<n;i++){
        //     temp[x++]=nums[i];
        // }
        // for(int i=0;i<n-k;i++){
        //     temp[x++]=nums[i];
        // }
        // for(int i=0;i<n;i++)
        //     nums[i]=temp[i];

        //  This takes O(N) time and O(1)
        reverse(nums.begin(),nums.end()); // this will make 1,2,3,4,5,6,7 => 7,6,5,4,3,2,1
        reverse(nums.begin(),nums.begin()+k); // this will reverse 7,6,5 => 5,6,7
        reverse(nums.begin()+k,nums.end()); // this will reverse 4,3,2,1 => 1,2,3,4

        return;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna