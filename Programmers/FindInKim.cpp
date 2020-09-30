#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = ""; 

    vector<string> ::iterator iter;

    iter = find(seoul.begin(), seoul.end(), "Kim");

    answer = "김서방은 " + ((to_string)(iter - seoul.begin())) + "에 있다";

    return answer;
}