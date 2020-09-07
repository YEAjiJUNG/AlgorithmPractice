#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int N;
    int arr[500001];
    int count_arr[8001];
    double sum = 0;
    int max_value = 0;
    int count = 0;
    int many = 0;

    cin >> N;

    for(int i = 0; i < 8001; i++)
    {
        count_arr[i] = 0;
    }

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        int value = arr[i] + 4000;
        count_arr[value]++;
    }
    
    max_value = count_arr[0];
    for(int i = 1; i < 8001; i++)
    {   
        max_value = max(max_value, count_arr[i]);
    }
    //            -4000
    // count_arr => 0 1 2 3 4 5 6 7 8 9....
    //              2 3 4 5 10 3 2 5 10 2

    for(int i = 0; i < 8001; i++)
    {
        if(max_value == count_arr[i])
        {
            count++;
            if(count <= 2)
                many = i;
        }
    }

    for(int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    sort(arr, arr+N); // sort(start, end) => [start, end) => start <= x < end

    cout << (int)(floor(sum/N + 0.5)) << "\n" << arr[N/2] << "\n" << many - 4000 << "\n" << arr[N-1] - arr[0] << "\n";

    return 0;


}