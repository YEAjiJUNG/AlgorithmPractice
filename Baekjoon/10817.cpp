#include <iostream>

using namespace std;

int main()
{
    int A,B,C,mid_ABC;
    cin >> A >> B >> C;

    if(A>B)
    {
        if(B>C)
        {
            mid_ABC = B;
        }
        else
        {
            if(C>A)
            {
                mid_ABC = A;
            }
            else
            {
                mid_ABC = C;
            }
            
        }
    }
    else
    {
       if(B<C)
        {
            mid_ABC = B;
        }
        else
        {
            if(C>A)
            {
                mid_ABC = C;
            }
            else
            {
                mid_ABC = A;
            }
            
        }
    }
    
    cout << mid_ABC << endl;

    return 0;
}