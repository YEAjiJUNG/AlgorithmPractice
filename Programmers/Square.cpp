#include <algorithm>

using namespace std;

int GCD(int a, int b){
   if(b == 0){
       return a;
   }
   else{
       return GCD(b, a%b);
   }
}

long long solution(int w, int h) {
    long long answer = 1;
    long long W = w;
    long long H = h;
    long long sq = 0;

    int gcd = GCD(w, h);

    if(gcd == 1){
        sq = w + h - 1;
    }
    else if(gcd >= 2){
        sq = w + h - gcd;
    }

    answer = W * H - sq;
    
    return answer;
}