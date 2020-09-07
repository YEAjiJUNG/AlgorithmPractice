#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double r;

    cin >> r;

    cout << setprecision(6) << fixed << M_PI * r * r << endl;
    cout << setprecision(6) << fixed << 2 * r * r << endl;

    return 0;
}