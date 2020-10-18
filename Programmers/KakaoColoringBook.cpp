#include <vector>
#include <queue>

using namespace std;
struct coord {
    int y, x;
};
bool visit[100][100] = {false,};

int M, N;
bool isValid(int y, int x) {
    if (x < 0 || x >= N || y < 0 || y >= M) return false;
    return true;
}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    for (int i = 0 ; i < m; i++) {
        for (int j = 0; j < n; j++) {
            visit[i][j] = false;
        }
    }
    M = m;
    N = n;
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!visit[i][j]) {
                visit[i][j] = true;
                if (picture[i][j] != 0) {
                    number_of_area++;
                    queue<coord> q;
                    q.push({i, j});
                    int count = 0;
                    int color = picture[i][j];
                    while (!q.empty()) {
                        count++;
                        coord cur = q.front(); q.pop();
                        if (isValid(cur.y-1, cur.x) && 
                            picture[cur.y-1][cur.x] == color && !visit[cur.y-1][cur.x]) {
                            q.push({cur.y-1, cur.x});
                            visit[cur.y-1][cur.x] = true;
                        } 
                        if (isValid(cur.y+1, cur.x) && 
                            picture[cur.y+1][cur.x] == color && !visit[cur.y+1][cur.x]) {
                            q.push({cur.y+1, cur.x});
                            visit[cur.y+1][cur.x] = true;                    
                        }
                        if (isValid(cur.y, cur.x-1) && 
                            picture[cur.y][cur.x-1] == color && !visit[cur.y][cur.x-1]) {
                            q.push({cur.y, cur.x-1});
                            visit[cur.y][cur.x-1] = true;
                        }
                        if (isValid(cur.y, cur.x+1) && 
                            picture[cur.y][cur.x+1] == color && !visit[cur.y][cur.x+1]) {
                            q.push({cur.y, cur.x+1});
                            visit[cur.y][cur.x+1] = true;
                        }
                    }
                    if (max_size_of_one_area < count) 
                        max_size_of_one_area = count;
                }
            }
        }
    }

    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}