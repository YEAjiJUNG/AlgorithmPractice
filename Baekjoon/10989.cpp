#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int arr[10001];
    // arr[i] = a; i라는 숫자가 a번 나왔다
    cin >> N;

    for(int i = 0; i < 10001; i++)
    {
        arr[i] = 0;
    }

    for(int i = 0; i < N; i++)
    {
        int value;
        cin >> value;
        arr[value]++;
    }

    for(int i = 1; i < 10001; i++)
    {
        arr[i] += arr[i-1]; 
    }

    for(int i = 1; i < 10001; i++)
    {
        int diff = arr[i] - arr[i-1];

        for(int j = 0; j < diff; j++)
        {
            cout << i << "\n";
        }
    }

    return 0;

}