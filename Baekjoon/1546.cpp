#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    double *arr = new double[N];

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    double max = arr[0];

    for(int i = 0; i < N; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    for(int i = 0; i < N; i++)
    {
        arr[i] = arr[i] / max * 100;
    }

    double sum = 0;

    for(int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    cout << sum / N << endl;
    
    return 0;
    
}