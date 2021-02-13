#include <string>
#include <vector>

using namespace std;

string Binary(int n){
    string st="";
    while(n > 1){
        st = to_string(n % 2) + st;
        n/=2;
    }
    return st;
}

int getCount(string st){
    int count= 0;
    for(int i = 0; i < st.size(); i++){
        if(st[i] == '1'){
            count++;
        }
    }
    return count;
}

int solution(int n) {
    int answer = 0;
    string st = Binary(n);

    while(1){
        n++;
        if(getCount(st) == getCount(Binary(n))){
            answer = n;
            break;
            
        }

    }
    return answer;
}