#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int count = 0;

    cin >> str;

    for(int i = 0; i < str.size();)
    {
       string tmp = "";
       tmp += str[i];
       tmp += str[i+1];

       bool check = false;
       
       for(int j = 0; j < 8; j++)
       {
           if(tmp.compare("dz") == 0 && str[i+2] == '=')
            {
                i += 3;
                check = true;
                count++;
                break;
            }
            else if(tmp.compare(arr[j]) == 0)
            {
                i += 2;
                check = true;
                count++;
                break;
            }
       }

       if(!check)
       {
           i += 1;
           count++;
       }
    }

    cout << count << endl;

    return 0;
}