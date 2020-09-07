#include <iostream>

using namespace std;

int main()
{
    int num, n = 1;
    int up, down;

    cin >> num;

    while( num > (n * (n+1)) / 2 )
    {
        n++;
    }
    num -= (n * (n-1)) / 2;

    if( n % 2 == 1 )
    {
        up = n;
        down = 1;
        while(num > 1)
        {
            up--;
            down++;
            num--;
        }
    }
    else
    {
        up = 1;
        down = n;
        while(num > 1)
        {
            up++;
            down--;
            num--;
        }
    }

    cout << up << "/" << down << endl;

    return 0;

}