#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int h1,h2,h3,b1,b2;
    cin >> h1 >> h2 >> h3 >> b1 >> b2;


   int ham_min = min(h1, min(h2,h3));
   int bev_min = min(b1,b2);

   cout << ham_min + bev_min -50 << endl;
   
    return 0;
}