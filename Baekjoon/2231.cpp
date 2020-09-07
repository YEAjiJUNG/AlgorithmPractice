#include <iostream>

using namespace std;

int sol(int n)
{
    for(int i = 1; i < n; i++)
    {
        int tmp = i;
        int plus = i;
        while(tmp != 0)
        {
            plus += tmp % 10;
            tmp /= 10;
        }
        if(plus == n)
        return i;
    }
    return 0;
}

int main()
{
    int N;

    cin >> N;

    cout << sol(N) << endl;

    return 0;

}

