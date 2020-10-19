#include <string>
#include <vector>

using namespace std;

bool checkSkill(string skill, char s) {
    static int index = 0;
    if (s == '-') index = 0;
    if (s != skill[index]) {
        index = 0;
        return false;    
    }
    index++;
    return true;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for (auto st : skill_trees) {
        bool isDone = true;
        checkSkill(skill, '-');
        for (int i = 0; i < st.size(); i++) {
            if (skill.find(st[i]) != string::npos && 
                !checkSkill(skill, st[i])) {
                isDone = false;
                break;
            }
        }
        if (isDone) {
            answer++;
        }
    }
    return answer;
}