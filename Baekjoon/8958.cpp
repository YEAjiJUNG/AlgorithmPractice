#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    string * arr = new string[num];

    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
        int result = 0;
        int count_o = 0;

        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 'O') 
            {
                count_o++;
            } 
            else
            {
                count_o = 0;
            }

            result += count_o;
        }
        
        cout << result << endl;
    }
    
}