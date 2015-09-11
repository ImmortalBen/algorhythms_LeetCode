class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i=0; i<board.size(); i++){
            for (int j=0; j<board[i].size(); j++){
                if (move(board, j, i, 0, word)){
                    return true;
                }
            }
        }
    }
    
    bool move(vector<vector<char>>& board, int x, int y, int length, string word){
        if (x<0 || x>=board[y].size() || y<0 || y>= board.size()){
            return false;
        }
        if (board[y][x] != word[length]){
            return false;
        }
        if (length == word.size()-1){
            return true;
        }
        bool flag = false;
        char cur = board[y][x];
        board[y][x] = '!';
        //MOVE UP
        if (!flag && y>0){  
            flag = move(board, x, y-1, length+1, word);
        }
        //MOVE DOWN
        if (!flag && y<board.size()-1){
            flag = move(board, x, y+1, length+1, word);
        }
        //MOVE LEFT
        if (!flag && x>0){
            flag = move(board, x-1, y, length+1, word);
        }
        //MOVE RIGHT
        if (!flag && x<board[y].size()-1){
            flag = move(board, x+1, y, length+1, word);
        }
        board[y][x] = cur;
        return flag;
    }
    
};