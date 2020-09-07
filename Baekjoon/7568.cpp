#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int* x = new int[N];
    int* y = new int[N]; 
    int* rank = new int[N];

    for(int i = 0; i < N; i++)
        rank[i] = 1;

    for(int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i != j)
            {
                if(x[i] < x[j] && y[i] < y[j])
                {
                    rank[i]++;
                }
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << rank[i];
        if (i != N - 1) 
        cout << " ";
    } 

    return 0;
}