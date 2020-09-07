#include <iostream>

using namespace std;

int main()
{
    int num;
    string str;
    int count = 0;

    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cin >> str;
        bool check = true;

        for(int j = 0; j < str.size(); j++)
        {
            for(int k = 0; k < j; k++)
            {
                if(str[j] != str[j-1] && str[j] == str[k])
                {
                    check = false;
                    break;
                }
            }
        }
        if(check) count++;
    }

        cout << count << endl;

        return 0;

}