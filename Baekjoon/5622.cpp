#include <iostream>

using namespace std;

int main()
{
    string str;
    int alph[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int res = 0;

    cin >> str;

    for(int i = 0; i < str.size(); i++)
    {
        int index = str[i] - 'A';
        res += alph[index];
    }
    cout << res << endl;
    
}