#include <iostream>

using namespace std;

int main(){

    int H,M,NH,NM;
    cin >> H >> M;

    if(H-1<0){
        if (M-45<0) {
            NH = H+23;
            NM = M+15;
        }
        else {
            NH = H;
            NM = M-45;
        }
    }
    else {
         if (M-45<0) {
            NH = H-1;
            NM = M+15;
        }
        else {
            NH = H;
            NM = M-45;
        }
    }
    
    cout << NH << " " << NM << endl;

    return 0;
}