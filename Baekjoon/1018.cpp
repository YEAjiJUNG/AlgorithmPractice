#include <iostream>

#define INT_MAX 2147483647
using namespace std;

int comp(char** a, char b[8][8], int st_i, int st_j)
{
    int count = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            //cout << a[i][j] << " " << b[i+st_i][j+st_j] << endl;
            if (a[i+st_i][j+st_j] != b[i][j]) count++;
        }
    }
    return count;
}

int main()
{
    int M, N;
    char arr1[8][8];
    char arr2[8][8];

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if ((i+j)%2 == 0) 
            {
                arr1[i][j] = 'W';
                arr2[i][j] = 'B';
            }
            else
            {
                arr1[i][j] = 'B';
                arr2[i][j] = 'W';
            }
        }
    }

    cin >> M >> N;
    // 원래는 char* arr = new int[N];
    // char** arr <= char*를 가리키는 포인터가 arr
    // WBWBWBWBWB
    // BWBWBWBWBW
    // 2 * 8 arr
    // char** arr = new char*[M];
    // ->
    // ->
    // ...
    // ->
    //for (..)
    // -> [] [] [] [] ... [] [] []
    // -> [] [] [] [] ... [] [] []
    // -> ...
    // -> [] [] [] [] ... [] [] []

    char** arr = new char*[M];
    for (int i = 0; i < M; i++)
    {
        arr[i] = new char[N];
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

// WBWBWBWBWBWB
// WBWBWBWBWBWB
    int min = INT_MAX;
    for (int i = 0; i <= M - 8; i++) {
        for (int j = 0; j <= N - 8; j++) {
            if (min > comp(arr, arr1, i, j)) {
                min = comp(arr, arr1, i, j);
            }
            if (min > comp(arr, arr2, i, j)) {
                min = comp(arr, arr2, i, j);
            }
        }
    }

    cout << min << endl;
}