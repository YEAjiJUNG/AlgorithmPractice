#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;
    
    int res = N / 5;

    
    while ( res >= 0) {
        if ((N - res * 5) % 3 == 0) {
            cout << res + (N - res * 5) / 3 << endl;
            return 0;
        }

        res -= 1;
    }
    
    cout << -1 << endl;
    return 0;
}