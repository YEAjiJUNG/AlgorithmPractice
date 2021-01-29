#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> rest;
    queue<int> day;
    int count = 0;

    for(int i = 0; i < progresses.size(); i++){
        rest.push_back(100-progresses[i]);
        if(rest[i] % speeds[i] == 0){
            day.push(rest[i]/speeds[i]);
        }
        else{
            day.push(rest[i]/speeds[i] + 1);
        }
    }


    int comp = -1;
    while(!day.empty()){
        int current = day.front();    
        day.pop();
        if (comp == -1) {
            count++;
            comp = current;    
            continue;
        }
        if (comp < current) {
            answer.push_back(count);
            count = 1;
            comp = current;     
        } else {
            count++;
        }
        if(day.empty()){
            answer.push_back(count);
        }
    }

    return answer;
}