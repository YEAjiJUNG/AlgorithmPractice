#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    
    vector<pair<int, int>> v1;
    for(int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        v1.push_back(make_pair(x, y));
    }

    sort(v1.begin(), v1.end());

    for(int i = 0; i < N; i++)
    {
        cout << v1[i].first << " " << v1[i].second << "\n";
    }

    return 0;
}