#include <iostream>

using namespace std;

int main()
{
    int h, w, N, test;

    cin >> test;

    for(int i = 0; i < test; i++)
    {
        cin >> h >> w >> N;
        N--;

        cout << (N % h + 1) * 100 + (N / h + 1) << endl;
    }

    return 0;

}