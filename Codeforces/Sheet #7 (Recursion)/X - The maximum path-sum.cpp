#include <iostream>
#include <vector>
#include <climits>
 
using namespace std;
 
int getMaxPathSum(const vector<vector<int>>& matrix, int row, int col) {
    // Base case: reached the bottom-right cell
    if (row == matrix.size() - 1 && col == matrix[0].size() - 1)
        return matrix[row][col];
    
    // Recursive cases: moving down and moving right
    int downSum = INT_MIN;
    int rightSum = INT_MIN;
    
    if (row + 1 < matrix.size())
        downSum = getMaxPathSum(matrix, row + 1, col);
    
    if (col + 1 < matrix[0].size())
        rightSum = getMaxPathSum(matrix, row, col + 1);
    
    // Return the maximum sum of the current cell and the maximum path sum from the next cells
    return matrix[row][col] + max(downSum, rightSum);
}
 
int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int maxPathSum = getMaxPathSum(matrix, 0, 0);
    cout << maxPathSum << endl;
    
    return 0;
}