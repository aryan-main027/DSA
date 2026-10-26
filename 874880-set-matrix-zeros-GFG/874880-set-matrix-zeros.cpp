class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        vector<pair<int,int>>p;
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] == 0)
                    p.push_back(make_pair(i,j));
            }
        }
        
        for(auto pa : p){
            int row = pa.first;
            int col = pa.second;
            
            int i = row , j = 0;
            // Horizonatal
            while(j<mat[0].size()){
                mat[i][j] = 0;
                j++;
            }
            
            i = 0 , j = col;
            // Vertical
            while(i<mat.size()){
                mat[i][j] = 0;
                i++;
            }
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna