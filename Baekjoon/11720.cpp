#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    string num;

    cin >> N;
    cin >> num;

    for(int i = 0; i < N; i++)
    {
        sum += ( (int)num[i] - 48 );
    }
    
    cout << sum << endl;

    return 0;
}