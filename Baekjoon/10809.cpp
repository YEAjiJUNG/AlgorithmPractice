#include <iostream>

using namespace std;

int main()
{
    string word;
    int alph[26];

    cin >> word;

    for(int i = 0; i < 26; i++)
    {
        alph[i] = -1;
    }

    for(int i = 0; i < word.size(); i++)
    {
        int index = (int)word[i] - (int)'a';
        if(alph[index] == -1)
        {
            alph[index] = i;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        cout << alph[i] << " "; 
    }
    cout << endl;

    return 0;

    
}