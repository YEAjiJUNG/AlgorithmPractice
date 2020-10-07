#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

string solution(string s) {
    string answer = s;

    sort(answer.begin(),answer.end(),greater<char>());

    return answer;
}