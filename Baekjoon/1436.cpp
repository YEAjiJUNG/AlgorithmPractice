#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N; 

    cin >> N;

    int num = 666;
    int count = 0;

    while( count != N )
    {
        string s = to_string(num);
        if(s.find("666") != string::npos) 
        {
            count++;
        }
        num++;
    }

    cout << num-1 << endl;

    return 0;
}
  


