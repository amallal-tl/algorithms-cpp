class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool isValid = true;
        int target = board.size();
        for(int i = 0; i < board.size()-1; i++){
            int sum = 0, fact = 0;
            for(int j = 0; j < board.size()-1; j++){
                if(board[i][j] != '.')
                    sum += board[i][j];
                
                
            }
            int rem = target - sum!;
            if
        }
    }
};