#include <iostream>

using namespace std;

int main()
{
    int N, R;
    string str, res;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> R >> str;
        res = "";

        for(int  i = 0; i < str.size(); i++)
        {
            for(int j = 0; j < R; j++)
            {
                res += str[i];
            }
        } 
        cout << res << endl;
    }

    return 0;
}