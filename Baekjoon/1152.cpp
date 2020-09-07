#include <iostream>

using namespace std;

int main()
{
    string str;
    int count = 0;

    getline(cin, str);

	bool check = false;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == ' ' && check)
        {
            count++;
            check = false;
        }
        else if(str[i] != ' ')
        {
            check = true;
        }
    }

    if(check) count++;

    cout << count << endl;

    return 0;
}