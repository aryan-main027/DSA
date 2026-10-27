class Solution {
  public:
    int r,c;
    int row[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int col[8] = {-1,  0,  1, -1, 1, -1, 0, 1};
    
    bool valid(int i,int j){
        return i>=0&&i<r&&j>=0&&j<c;
    }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        r = grid.size();
        c = grid[0].size();
        
        queue<pair<int,int>>q;
        int count = 0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] == 'L'){
                    
                    count++;
                    // Make grid[i][j] = 'W'
                    q.push(make_pair(i,j));
                    grid[i][j] = 'W';
                    
                    while(!q.empty()){
                        int new_i = q.front().first;
                        int new_j = q.front().second;
                        
                        q.pop();
                        
                        for(int k=0;k<8;k++){
                            if(valid(new_i+row[k],new_j+col[k])&&grid[new_i+row[k]][new_j+col[k]] == 'L'){
                                grid[new_i+row[k]][new_j+col[k]] = 'W';
                                q.push(make_pair(new_i+row[k],new_j+col[k]));
                                
                            }
                        }
                    }
                }
            }
        }
        
        return count;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna