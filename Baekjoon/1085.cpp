#include <iostream>

using namespace std;

int main()
{
    int x, y, w, h;

    cin >> x >> y >> w >> h;

    cout << min( min( min(y, h-y), x ), w-x ) << endl;

    return 0;
}