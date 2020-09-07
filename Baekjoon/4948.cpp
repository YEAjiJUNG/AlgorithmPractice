#include <iostream>

using namespace std;

int main()
{
    int n = -1;

    while(n != 0)
    {
        cin >> n;
        int count = 0;

        for(int i = n+1; i <= 2*n; i++)
        {
            bool check = true;

            for(int j = 2; j*j <= i; j++)
            {
                if(i % j == 0)
                {
                    check = false;
                    break;
                }
            }
            if(check && i != 1) count++; 
        }
        if(n != 0) cout << count << "\n";
    }

    return 0;
}