#include <iostream>

using namespace std;

int main() {
    int N;

    cin >> N;
    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int max = arr[0];
    for (int i = 1; i < N; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    int min = arr[0];
    for (int i = 1; i < N; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    cout << min << " " << max << endl;
    
    delete arr;

    return 0;
}