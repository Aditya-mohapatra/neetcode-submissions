class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // row check
        for(int i=0;i<9;i++){
            unordered_map<char,int> row;
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    row[board[i][j]]++;
                    if(row[board[i][j]] > 1)
                        return false;
                }
            }
        }

        // column check
        for(int i=0;i<9;i++){
            unordered_map<char,int> col;
            for(int j=0;j<9;j++){
                if(board[j][i] != '.'){
                    col[board[j][i]]++;
                    if(col[board[j][i]] > 1)
                        return false;
                }
            }
        }

        // subgrid check
        for(int r=0;r<9;r+=3){
            for(int c=0;c<9;c+=3){

                unordered_map<char,int> sub;

                for(int i=r;i<r+3;i++){
                    for(int j=c;j<c+3;j++){

                        if(board[i][j] != '.'){
                            sub[board[i][j]]++;
                            if(sub[board[i][j]] > 1)
                                return false;
                        }

                    }
                }

            }
        }

        return true;
    }
};
