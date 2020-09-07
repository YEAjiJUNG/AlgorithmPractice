#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

struct item
{
    int st;
    int en;
};

void dfs(int, int, int, int, vector<item>&);

int main() {
    int N;
    cin >> N;

    vector<item> result;
    dfs(N, 1, 2, 3, result);

    printf("%d\n", result.size());
    for (auto item_ : result) {
        printf("%d %d\n", item_.st,item_.en);
    }
}


void dfs(int N, int a, int b, int c, vector<item>& result) {
    if (N == 1) {
        item tmp;
        tmp.st = a;
        tmp.en = c;
        result.push_back(tmp);
    } else {
        dfs(N-1, a, c, b, result);
        item tmp;
        tmp.st = a;
        tmp.en = c;
        result.push_back(tmp);
        dfs(N-1, b, a, c, result);
    }
    return; 
}
