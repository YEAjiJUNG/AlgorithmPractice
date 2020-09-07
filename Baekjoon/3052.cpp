#include <iostream>

using namespace std;

int main()
{
    int arr1[10];
    int arr2[42];
    int a = 0;
    
    for(int i = 0; i < 42; i++)
    {
        arr2[i] = 0;
    }
    for(int i = 0; i < 10; i++)
    {
        cin >> arr1[i];  
        int remain = arr1[i] % 42;
        arr2[remain] = 1;
    }
    for(int i = 0; i < 42; i++)
    {
        if(arr2[i] == 1)
        {
            a += 1;
        } 
    }
    cout << a << endl;

    return 0;

}