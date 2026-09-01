class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;

        int n = matrix.size();
        int m = matrix[0].size();

        int stRow = 0, stCol = 0;
        int endRow = n-1;
        int endCol = m-1;

        while(stRow <= endRow && stCol <= endCol) {
            //top
            for(int j=stCol; j<=endCol; j++) {
                ans.push_back(matrix[stRow][j]);
            }
            //right
            for(int i=stRow+1; i<=endRow; i++) {
                ans.push_back(matrix[i][endCol]);
            }

            //bottom
            for(int j=endCol-1; j>=stCol; j--) {
                if(stRow == endRow) {
                    break;
                }
                ans.push_back(matrix[endRow][j]);
            }

            //left
            for(int i=endRow-1; i>=stRow+1; i--) {
                if(stCol == endCol) {
                    break;
                }
                ans.push_back(matrix[i][stCol]);
            }
            stRow++; stCol++;
            endRow--; endCol--;

        }

        return ans;

        
    }
};