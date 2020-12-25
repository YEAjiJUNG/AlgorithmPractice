#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

struct item
{
    string uid;
    bool isEnter;
};

vector<item> results;
map<string, string> uid_nick;

vector<string> solution(vector<string> record)
{
    vector<string> answer;

    for (int i = 0; i < record.size(); i++)
    {
        stringstream s(record[i]);
        string tmp;
        vector<string> tokens;

        while (getline(s, tmp, ' '))
        {
            tokens.push_back(tmp);
        }

        if (tokens[0] == "Enter")
        {
            results.push_back({tokens[1], true});
            uid_nick[tokens[1]] = tokens[2];
        }
        else if (tokens[0] == "Leave")
        {
            results.push_back({tokens[1], false});
        }
        else
        {
            uid_nick[tokens[1]] = tokens[2];
        }
    }

    for (int i = 0; i < results.size(); i++)
    {
        if (results[i].isEnter == true)
        {
            answer.push_back(uid_nick[results[i].uid] + "님이 들어왔습니다.");
        }
        else
        {
            answer.push_back(uid_nick[results[i].uid] + "님이 나갔습니다.");
        }
    }

    return answer;
}