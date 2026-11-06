class Solution {
public:

    bool check(int num, vector<vector<char>>& board, int i, int j) {

        char c = '0' + num;

        // Check same row
        for(int col = 0; col < 9; col++) {
            if(board[i][col] == c)
                return false;
        }

        // Check same column
        for(int row = 0; row < 9; row++) {
            if(board[row][j] == c)
                return false;
        }

        // Check 3x3 box
        int row = (i / 3) * 3;
        int col = (j / 3) * 3;

        for(int a = row; a < row + 3; a++) {
            for(int b = col; b < col + 3; b++) {
                if(board[a][b] == c)
                    return false;
            }
        }

        return true;
    }

    bool find(int i, int j, vector<vector<char>>& board) {

        // All rows completed
        if(i == 9)
            return true;

        // Move to next row
        if(j == 9)
            return find(i + 1, 0, board);

        // Skip already filled cells
        if(board[i][j] != '.')
            return find(i, j + 1, board);

        // Try digits 1 to 9
        for(int num = 1; num <= 9; num++) {

            if(check(num, board, i, j)) {

                board[i][j] = '0' + num;

                if(find(i, j + 1, board))
                    return true;

                // Backtrack
                board[i][j] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        find(0, 0, board);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna