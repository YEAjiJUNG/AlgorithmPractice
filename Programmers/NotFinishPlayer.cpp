#include <string>
#include <vector>
#include <map>

using namespace std;


string solution(vector<string> participant, vector<string> completion)
{
    string answer;
    map<string, int> participate_to_number;
    map<string, int> complete_to_number;
    for (int i = 0; i < participant.size(); i++)
    {
        if (participate_to_number.find(participant[i]) == participate_to_number.end())
        {
            participate_to_number[participant[i]] = 0;
            complete_to_number[participant[i]] = 0;
        }
        participate_to_number[participant[i]] += 1;
    }

    for (int i = 0;  i < completion.size(); i++) 
    {
        complete_to_number[completion[i]] += 1;
    }

    map<string, int>::iterator it = participate_to_number.begin();
    // it => 3번 주소 pair<string, int>
    // it => 3번 주소 int
    for (; it != participate_to_number.end(); it++)
    {
        string participant_name = it->first;
        int participant_num = it->second;
        int completion_num = complete_to_number[participant_name];
        if(participant_num != completion_num)
        {
            answer = participant_name;
            break;
        } 
    }

    return answer;
    
}