class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();     // columns
        int i = 0, j = m-1;

        while( i < n && j >= 0) {
            if(matrix[i][j] == target){
                return true;
            } else if( target < matrix[i][j]){ // down move for col
                j--;
            } else { // Left move for row
                i++;
            }
        }
        return false;

        
    }
};