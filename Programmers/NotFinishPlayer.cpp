#include <string>
#include <vector>

using namespace std;


string solution(vector<string> participant, vector<string> completion)
{
    int i = 0;
    while(participant.size()>1)
    {
        for(int j = 0; j <completion.size(); j++)
        {
            if(participant[i] == completion[j])
            {
                participant.erase(participant.begin() + i);
                completion.erase(completion.begin() + j);
                i = -1;
                break;
            }
        }
        i++;
    }
    string answer = participant[0];
    return answer;
    
}