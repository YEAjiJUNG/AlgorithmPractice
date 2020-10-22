#include <algorithm>

using namespace std;

long long solution(int w, int h) {
    long long answer = 1;
    long long n = max(w, h);
    long long sq = 0;
    long long W = w;
    long long H = h;

    for(int i = 1; i <= n; i++){
        int GCF =0;
        if(w % i == 0){
            if(h % i == 0){
                GCF = i;
            }
        }
        if(GCF >= 2){
            sq = w + h - GCF; 
        }
        else if(GCF == 1){
            sq = w + h - 1;
        }

    }
    answer = W * H - sq;
    
    return answer;
}