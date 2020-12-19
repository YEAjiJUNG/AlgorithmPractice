#include <string>
#include <vector>

using namespace std;

vector<vector<char>> b;
vector<vector<bool>> isErase;
int answer = 0;

void init()
{
    for (int i = 0; i < isErase.size(); i++)
    {
        for (int j = 0; j < isErase[i].size(); j++)
        {
            isErase[i][j] = false;
        }
    }
}

bool isValid(int y, int x)
{
    if (y < 0 || y >= b.size() || x < 0 || x >= b[0].size())
        return false;
    return true;
}

bool checkBlock()
{
    bool check = false;
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            if (b[i][j] != '-' &&
                isValid(i + 1, j) && isValid(i, j + 1) &&
                isValid(i + 1, j + 1) && b[i][j] == b[i + 1][j] &&
                b[i][j] == b[i][j + 1] && b[i][j] == b[i + 1][j + 1])
            {
                isErase[i][j] = true;
                isErase[i][j + 1] = true;
                isErase[i + 1][j] = true;
                isErase[i + 1][j + 1] = true;
                check = true;
            }
        }
    }

    return check;
}

void eraseBlock()
{
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            if (isErase[i][j])
            {
                b[i][j] = '-';
                answer++;
            }
        }
    }
}

void moveBlock()
{
    for (int i = b.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            if (b[i][j] == '-')
            {
                for (int k = i; k >= 0; k--)
                {
                    if (b[k][j] != '-')
                    {
                        b[i][j] = b[k][j];
                        b[k][j] = '-';
                        break;
                    }
                }
            }
        }
    }
}

int solution(int m, int n, vector<string> board)
{
    isErase.resize(board.size());
    b.resize(board.size());
    for (int i = 0; i < isErase.size(); i++)
    {
        isErase[i].resize(board[0].size());
        b[i].resize(board[0].size());
        for (int j = 0; j < board[0].size(); j++)
        {
            b[i][j] = board[i][j];
            isErase[i][j] = false;
        }
    }

    while (true)
    {
        init();
        if (checkBlock())
        {
            eraseBlock();
            moveBlock();
        }
        else
            break;
    }
    return answer;
}