#include <iostream>

using namespace std;
bool arr[10001];

int d(int n)
{
    int sum;

    sum = n;

    while( n > 0 )
    {
        sum += n % 10;
        n = n / 10;
    } 
    return sum;
}

int main()
{
    for(int i = 0; i < 10001; i++)
    {
        int sol = d(i);

        if(sol <= 10000)
        {
            arr[sol] = true;
        }
    }

    for(int i = 0; i < 10001; i++)
    {
        if(!arr[i])
        {
            cout << i << endl;
        }
    }
    return 0;


}