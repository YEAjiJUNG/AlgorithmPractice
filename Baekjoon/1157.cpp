#include <iostream>

using namespace std;

int main()
{
    string str;
    int alph[26];
    int max;

    cin >> str;

    for(int i = 0; i < 26; i++)
    {
        alph[i] = 0;
    }

    for(int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
        int index = str[i] - 'a';
        alph[index]++;
    }
    max = alph[0];
    for(int i = 1; i < 26; i++)
    {
        if(max < alph[i])
        {
            max = alph[i];
        }
    }
    char index = '!';

    for(int i = 0; i < 26; i++)
    {

        if(alph[i] == max)
        {
            if(index == '!')
            {
                index = i+65;
            }
            else
            {
                index = '?';
                break;
            }
        }
    }

    cout << index << endl;

    return 0;
}