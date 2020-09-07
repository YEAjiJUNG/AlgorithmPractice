#include <iostream>

using namespace std;

int main()
{
    int a, b, c, abc;
    cin >> a >> b >> c;
    abc = a * b * c;

    int arr[10];

    for ( int i = 0; i < 10; i++) {
        arr[i] = 0;
    }

    while ( abc != 0 ) {
        int remain = abc % 10;
        arr[remain] += 1;
        abc = abc / 10;
    }
    for( int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}