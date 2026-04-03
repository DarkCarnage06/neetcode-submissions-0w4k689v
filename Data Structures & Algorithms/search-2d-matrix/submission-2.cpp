class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int columns = matrix[0].size();

        int top = 0;
        int bottom = rows - 1;

        // Find the correct row
        while (top <= bottom) {
            int row = (top + bottom) / 2;

            if (target > matrix[row][columns - 1]) {
                top = row + 1;          // ❗ don't redeclare int
            }
            else if (target < matrix[row][0]) {
                bottom = row - 1;       // ❗ you wrote top here wrongly
            }
            else {
                break;
            }
        }

        if (top > bottom) return false;

        int row = (top + bottom) / 2;   // we need this row for column search

        int l = 0;
        int r = columns - 1;

        // Binary search inside row
        while (l <= r) {
            int mid = (l + r) / 2;

            if (target > matrix[row][mid]) {
                l = mid + 1;
            }
            else if (target < matrix[row][mid]) {
                r = mid - 1;
            }
            else {
                return true;
            }
        }

        return false;
    }
};

