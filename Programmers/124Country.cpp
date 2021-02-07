#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string arr[3] = {"1", "2", "4"};
    
    while(n > 0){
        int r = n % 3;
        n /= 3;
        if (r == 0) {
            answer = arr[2] + answer;
            n--;
        } else {
            answer = arr[r-1] + answer;
        }
    }
    return answer;
}