#include <iostream>

using namespace std;

bool han(int n)
{
    int a, b, c;

    if( n < 100 )return true;

    a = n / 100;
    b = ( n / 10 ) % 10;
    c = n % 10;

    if( a - b == b - c)return true;
    else return false;
}

int main()
{
    int N, res = 0;
    cin >> N;

    for(int i = 1 ; i <= N; i++)
    {
        if(han(i)) res++;
    }
    cout << res << endl;

    return 0;

}