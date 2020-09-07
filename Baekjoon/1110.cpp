#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int N_10 = (N/10), N_1 = (N%10);
    int nN = (10 * N_1)+ ((N_10 + N_1)%10);
    int count=1;

    while(1)
    {
        if(N == nN)
        {
            break;
        }
        count ++;
        N_10 = nN/10;
        N_1 = nN%10;
        nN = (10 * N_1)+ ((N_10 + N_1)%10);
    }

    cout << count << endl;

    return 0;
}