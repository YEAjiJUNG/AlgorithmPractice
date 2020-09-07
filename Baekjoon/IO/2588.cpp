#include <iostream>

using namespace std;

int main(){

    int A,B;
    int a,b,c;

    cin >> A;
    cin >> B;

    c = B%10;
    b = (B/10)%10;
    a = (B/100)%10;

    cout << A*c << endl;
    cout << A*b << endl;
    cout << A*a << endl;
    cout << A*B << endl;

    return 0;

}