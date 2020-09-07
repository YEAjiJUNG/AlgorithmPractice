#include <iostream>

using namespace std;

bool prime(int n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    if(n == 1) return false;
    return true;
}

int main()
{
    int test;

    cin >> test;

    for(int i = 0; i < test; i++)
    {
        int n;
        int a, b;

        cin >> n;

        a = n/2;
        b = n/2; 

        for(;b < n;a--,b++)
        {
            if(prime(a) && prime(b))
            {
                cout << a << " " << b << endl;
                break;
            }  
        }   

    }

    return 0;
    
}