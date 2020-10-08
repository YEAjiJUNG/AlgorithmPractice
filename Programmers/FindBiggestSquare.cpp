#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> board)
{
    int maximum = 0;
    if (board.size() == 1 || board[0].size() == 1) return 1;
    
    for (int i = 1; i < board.size(); i++) {
        for (int j = 1; j < board[i].size(); j++) {
            if (board[i][j] == 0) continue;
            board[i][j] = min(board[i-1][j-1], min(board[i-1][j], board[i][j-1])) + 1;
            if (maximum < board[i][j]) maximum = board[i][j];
        }
    }
    return maximum * maximum;
}