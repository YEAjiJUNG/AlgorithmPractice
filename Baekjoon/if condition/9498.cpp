#include <iostream>

using namespace std;

int main(){

    int A;
    cin >> A;

    if(90<=A){
        cout << "A" << endl;
    }
    else if(80<=A){
        cout << "B" << endl;
    }
    else if(70<=A){
        cout << "C" << endl;
    }
    else if(60<=A){
        cout << "D" << endl;
    }
    else{
        cout << "F" << endl;
    }

    return 0;

}