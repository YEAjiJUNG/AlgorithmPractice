#include <iostream>

using namespace std;

int main()
{
    long long x[3] = {-1, -1, -1}, y[3];
    long long max_res;

    while(1)
    {
        for(int i = 0; i < 3; i++)
        {
            cin >> x[i];

            y[i] = x[i] * x[i];
        }
        if(x[0] == 0)
        break;
        
        max_res = max(max(y[0], y[1]), y[2]);

        if(y[0] != max_res)
        {
            if(y[1] != max_res)
            {
                if(max_res == y[0] + y[1]) cout <<  "right" << endl;
                else cout << "wrong" << endl;
            }
            else
            {
                if(max_res == y[0] + y[2]) cout << "right" << endl;
                else cout << "wrong" << endl;
            }
        }
        else
        {
            if(max_res == y[1]+ y[2]) cout << "right" << endl;
            else cout << "wrong" << endl;
        }
    }

    return 0;
}