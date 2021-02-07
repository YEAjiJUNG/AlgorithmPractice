#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    s[0] = toupper(s[0]);

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ' && s[i+1] != ' '){
            s[i+1] = toupper(s[i+1]);
        }
        if(s[i] != ' ' && s[i+1] != ' '){
            s[i+1] = tolower(s[i+1]);
        }
    }

    answer = s;

    return answer;
}