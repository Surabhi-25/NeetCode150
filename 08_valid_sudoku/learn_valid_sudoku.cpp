#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int r,c;
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> cols(9);
        map <pair<int,int>,unordered_set<int>> boxes;

        for(r=0;r<9;++r){
            for(c=0;c<9;++c){
                if (board[r][c] == '.') {
                    continue;
                }
                int num = board[r][c] - '0';
                pair<int,int> currpair={r/3,c/3};

                if(rows[r].find(board[r][c])!=rows[r].end() ||
                cols[c].find(board[r][c])!=cols[c].end() ||
                boxes[currpair].find(board[r][c])!=boxes[currpair].end()){
                    return false;
                }
                else{
                    rows[r].insert(board[r][c]);
                    cols[c].insert(board[r][c]);
                    boxes[currpair].insert(board[r][c]);

                }
            }
        }
        return true;
    }

};
