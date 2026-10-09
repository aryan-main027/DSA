class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>pos;
        vector<int>neg;
        
        for(int x : arr){
            if(x < 0)
            neg.push_back(x);
            else
            pos.push_back(x);
        }
        
        int neg_size = neg.size() , pos_size = pos.size();
        
        int i = 0 , j = 0;
        int k = 0;
        while(i < pos_size && j < neg_size){
            arr[k] = pos[i];
            k++,i++;
            arr[k] = neg[j];
            k++,j++;
        }
        

        while(i < pos_size){
            arr[k] = pos[i];
            k++,i++;
        }
        
        while(j < neg_size){
            arr[k] = neg[j];
            k++,j++;
        }
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna