#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int A,i;
    cin >> A;

    for(i=1; i<=A; i++)
    {
        int a,b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << "\n";
    }

    return 0;
}