#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    double num;
    cin >> N;

    int * arr = new int[N];

    for(int i = 0; i < N; i++)
    {
        cin >> num;
        double sum = 0, stu = 0;
        
        for(int j = 0; j < num; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        double avg = sum / num; 
        for(int j = 0; j < num; j++)
        {
            if( avg < arr[j] )
            {
                stu++;
            }
        }
        cout << fixed;
        cout << setprecision(3) << stu / num * 100 << "%" << endl;
    }
    return 0;

}