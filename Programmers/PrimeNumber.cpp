#include <string>
#include <vector>
using namespace std;
int numbers[1000000] ;
int solution(int n) {

    int answer = 0;
 
    
    for(int i = 2; i <= n; i++) {
        if(numbers[i] == 1) continue;
        for(int j = i*2; j <= n; j+=i) {
            
            numbers[j] = 1;
            
        }
    }
    
    for(int i = 2; i <= n; i++) {
        if(numbers[i] == 0) answer++;
    }
    
    return answer;
}