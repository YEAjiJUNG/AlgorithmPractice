#include <iostream>

using namespace std;

int main(){

    int A,B;

    cin >> A;
    cin >> B;

    if(A>B){
        cout << ">" << endl;
    }

    if(A<B){
        cout << "<" << endl;
    }
    
    if(A==B){
        cout << "==" << endl;
    }
    
    return 0;
}