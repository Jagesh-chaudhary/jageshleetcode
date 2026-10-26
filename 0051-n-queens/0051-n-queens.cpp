class Solution {
public:


bool check(int n, vector<string>& Board, int i, int j) {
    // Upper left diagonal
    int row = i;
    int column = j;

    while (row > -1 && column > -1) {
        if (Board[row][column] == 'Q')
            return 0;

        row--;
        column--;
    }

    // Upper right diagonal
    row = i;
    column = j;

    while (row > -1 && column < n) {
        if (Board[row][column] == 'Q')
            return 0;

        row--;
        column++;
    }

    return 1;
}

void find(int row, int n, vector<vector<string>>& ans,
          vector<string>& Board, vector<bool>& column) {

    // Base case
    if (row == n) {
        ans.push_back(Board);
        return;
    }

    // Put queen at any position
    for (int j = 0; j < n; j++) {
        if (column[j] == 0 && check(n, Board, row, j)) {
            column[j] = 1;
            Board[row][j] = 'Q';

            find(row + 1, n, ans, Board, column);

            column[j] = 0;
            Board[row][j] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {

    vector<vector<string>> ans;
    vector<string> Board(n, string(n, '.'));

    vector<bool> column(n, 0);

    find(0, n, ans, Board, column);

    return ans;
}


};
