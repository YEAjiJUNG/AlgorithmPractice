#include <string>
#include <vector>

using namespace std;

bool solution(string s) {

    bool answer = true;
    
    if(s.size() == 4 || s.size() == 6){
        for(int i = 0; i < s.size(); i++){
            if(s.at(i) < 48 || s.at(i) > 57){
                answer = false;
            }
        }
    }
    else
    {
        answer = false;
    }
    return answer;
    
}