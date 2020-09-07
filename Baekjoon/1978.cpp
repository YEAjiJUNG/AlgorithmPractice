#include <iostream>

using namespace std;

int main()
{
    int N, num, count = 0;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> num; 

        bool check = true;

        for(int j = 2; j < num; j++)
        {
            if(num % j == 0)
            {
                check = false;
                break;
            }
        }
        if(check && num != 1) count++;
    }
    cout << count << endl;

    return 0;

}